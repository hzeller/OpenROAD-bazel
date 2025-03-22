# -*- Python -*-

"""Bazel rule to run flex toolchain
"""

# Adapter rule around the @rules_flex toolchain.
def genlex(name, prefix, src, out):
    """Generate C/C++ language source from lex file using Flex
    """
    PREFIX_OPTION='-P' + prefix if prefix else ''
    native.genrule(
        name = name,
        srcs = [src],
        outs = [out],
        cmd = select({
            "//bazel:use_local_flex_bison_enabled": "flex --outfile=$@ " + PREFIX_OPTION + " $<",
            "@platforms//os:windows": "win_flex.exe --outfile=$@ " + PREFIX_OPTION + "$<",
            "//conditions:default": "M4=$(M4) $(FLEX) --outfile=$@ " + PREFIX_OPTION + " $<",
        }),
        toolchains = select({
            "//bazel:use_local_flex_bison_enabled": [],
            "@platforms//os:windows": [],
            "//conditions:default": [
                "@rules_flex//flex:current_flex_toolchain",
                "@rules_m4//m4:current_m4_toolchain",
            ],
        }),
    )
