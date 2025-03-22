# -*- Python -*-

"""Bazel rule to run bison toolchain
"""

# Adapter rule around the @rules_bison toolchain.
def genyacc(
        name,
        src,
        header_out,
        source_out,
        prefix,
        extra_options = [],
        extra_outs = []):
    """Build rule for generating C or C++ sources with Bison.
    """
    PREFIX_OPTION='--name-prefix=' + prefix if prefix else ''

    native.genrule(
        name = name,
        srcs = [src],
        outs = [header_out, source_out] + extra_outs,
        cmd = select({
            "//bazel:use_local_flex_bison_enabled": "bison --defines=$(location " + header_out + ") --output-file=$(location " + source_out + ") " + " ".join(extra_options) + PREFIX_OPTION + " $<",
            "@platforms//os:windows": "win_bison.exe --defines=$(location " + header_out + ") --output-file=$(location " + source_out + ") " + " ".join(extra_options) + PREFIX_OPTION + " $<",
            "//conditions:default": "M4=$(M4) $(BISON) --defines=$(location " + header_out + ") --output-file=$(location " + source_out + ") " + " ".join(extra_options) + PREFIX_OPTION + " $<",
        }),
        toolchains = select({
            "//bazel:use_local_flex_bison_enabled": [],
            "@platforms//os:windows": [],
            "//conditions:default": [
                "@rules_bison//bison:current_bison_toolchain",
                "@rules_m4//m4:current_m4_toolchain",
            ],
        }),
    )
