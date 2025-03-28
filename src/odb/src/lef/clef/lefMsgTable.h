
/*
 * emsMkError:
 */

#include <cstdio>

#include "ems.h"

#ifdef TSIZE
#undef TSIZE
#define TSIZE 2048
#endif

emsError_t LEFEmsMsgTable[] = {
    {100, EMS_NONE, "lefrRead called before lefrInit\n", -1, 0},
    {101,
     EMS_NONE,
     "lefrSetRegisterUnusedCallbacks was not called to setup this data.\n",
     -1,
     0},
    {201,
     EMS_NONE,
     "LEF items that were present but ignored because of no callback:\n",
     -1,
     0},
    {203,
     EMS_NONE,
     "Number has exceeded the limit for an integer. See file %s at line %d.\n",
     -1,
     0},
    {1000, EMS_NONE, "Expecting '='", -1, 0},
    {1001, EMS_NONE, "End of file in &ALIAS", -1, 0},
    {1002, EMS_NONE, "Incomplete lef file", -1, 0},
    {1003, EMS_NONE, "tag is missing for BEGINEXT", -1, 0},
    {1004, EMS_NONE, "Tag for BEGINEXT is empty", -1, 0},
    {1005, EMS_NONE, "\" is missing in tag", -1, 0},
    {1006, EMS_NONE, "Ending \" is missing", -1, 0},
    {1007, EMS_NONE, "ENDEXT is missing", -1, 0},
    {1008,
     EMS_NONE,
     "Invalid characters found in \'%s\'.\nThese characters might have created "
     "by character types other than English.",
     -1,
     0},
    {1011,
     EMS_NONE,
     "%s, see file %s at line %d.\nLast token was <%s\">; space is missing "
     "between the closing \" of the string and ;.\n",
     -1,
     0},
    {1020, EMS_NONE, "Too many syntax errors.", -1, 0},
    {1300,
     EMS_NONE,
     "The index number %d given for the layer property is invalid.\nValid "
     "index is from 0 to %d",
     -1,
     0},
    {1301,
     EMS_NONE,
     "The index number %d given for the layer MINSIZE is invalid.\nValid index "
     "is from 0 to %d\n",
     -1,
     0},
    {1302,
     EMS_NONE,
     "The index number %d given for the layer MINSTEP is invalid.\nValid index "
     "is from 0 to %d",
     -1,
     0},
    {1303,
     EMS_NONE,
     "The index number %d given for the layer ARRAYCUTS is invalid.\nValid "
     "index is from 0 to %d",
     -1,
     0},
    {1304,
     EMS_NONE,
     "The index number %d given for the layer SPACING is invalid.\nValid index "
     "is from 0 to %d",
     -1,
     0},
    {1305,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_SPACING: %s.\nCorrect syntax "
     "is either \"SPACING minSpacing [CENTERTOCENTER]\"\n\"[LAYER "
     "secondLayerName | ADJACENTCUTS {2|3|4} WITHIN cutWithin | "
     "PARALLELOVERLAP | AREA cutArea]\" or\n\"SPACING eolSpace ENDOFLINE "
     "eolWidth WITHIN eolWITHIN [PARALLELEDGE parSpace WITHIN parWithin "
     "[TOWEDGES]]\"\n",
     -1,
     0},
    {1306,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_MAXFLOATINGAREA: "
     "%s.\nCorrect syntax is \"MAXFLOATINGAREA maxArea\"\n",
     -1,
     0},
    {1307,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nCorrect "
     "syntax is ARRAYSPACING [LONGARRAY] [WIDTH viaWidth] CUTSPACING "
     "cutSpacing\n\tARRAYCUTS arrayCuts SPACING arraySpacing ...\n",
     -1,
     0},
    {1308,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nLONGARRAY "
     "is defined after CUTSPACING.\nCorrect syntax is ARRAYSPACING [LONGARRAY] "
     "[WIDTH viaWidth] CUTSPACING cutSpacing\n\tARRAYCUTS arrayCuts SPACING "
     "arraySpacing ...\n",
     -1,
     0},
    {1309,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nWIDTH is "
     "defined after CUTSPACING.\nCorrect syntax is ARRAYSPACING [LONGARRAY] "
     "[WIDTH viaWidth] CUTSPACING cutSpacing\n\tARRAYCUTS arrayCuts SPACING "
     "arraySpacing ...\n",
     -1,
     0},
    {1310,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: "
     "%s.\nCUTSPACING has defined more than once.\nCorrect syntax is "
     "ARRAYSPACING [LONGARRAY] [WIDTH viaWidth] CUTSPACING "
     "cutSpacing\n\tARRAYCUTS arrayCuts SPACING arraySpacing ...\n",
     -1,
     0},
    {1311,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: "
     "%s.\nCUTSPACING which is required is either has not been defined or "
     "defined in a wrong location.\nCorrect syntax is ARRAYSPACING [LONGARRAY] "
     "[WIDTH viaWidth] CUTSPACING cutSpacing\n\tARRAYCUTS arrayCuts SPACING "
     "array Spacing ...\n",
     -1,
     0},
    {1312,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nSPACING "
     "should be defined with ARRAYCUTS.\nCorrect syntax is ARRAYSPACING "
     "[LONGARRAY] [WIDTH viaWidth] CUTSPACING cutSpacing\n\tARRAYCUTS "
     "arrayCuts SPACING arraySpacing ...\n",
     -1,
     0},
    {1313,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nCorrect "
     "syntax is ARRAYSPACING [LONGARRAY] [WIDTH viaWidth] CUTSPACING "
     "cutSpacing\n\tARRAYCUTS arrayCuts SPACING arraySpacing ...\n",
     -1,
     0},
    {1314,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ARRAYSPACING: %s.\nARRAYCUTS "
     "is required but has not been defined.\nCorrect syntax is ARRAYSPACING "
     "[LONGARRAY] [WIDTH viaWidth] CUTSPACING cutSpacing\n\tARRAYCUTS "
     "arrayCuts SPACING arraySpacing ...\n",
     -1,
     0},
    {1315,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_MINSTEP: %s.\nCorrect syntax "
     "is \"MINSTEP minStepLength [MAXEDGES maxEdges] [MINADJACENTLENGTH "
     "minAdjLength | MINBETWEENLENGTH minBetweenLength [EXCEPTSAMECORNERS]] "
     ";\"\n",
     -1,
     0},
    {1316,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ANTENNACUMROUTINGPLUSCUT: "
     "%s.\nCorrect syntax is \"ANTANNACUMROUTINGPLUSCUT\"\n",
     -1,
     0},
    {1317,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ANTENNAGATEPLUSDIFF: "
     "%s.\nCorrect syntax is \"ANTENNAGATEPLUSDIFF plusDiffFactor\"\n",
     -1,
     0},
    {1318,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ANTENNAAREAMINUSDIFF: "
     "%s.\nCorrect syntax is \"ANTENNAAREAMINUSDIFF minusDiffFactor\"\n",
     -1,
     0},
    {1319,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ANTENNAAREADIFFREDUCEPWL: "
     "%s.\nCorrect syntax is \"ANTENNAAREADIFFREDUCEPWL (( diffArea1 "
     "metalDiffFactor1 ) ( diffArea2 metalDiffFactor2 )...)\"\n",
     -1,
     0},
    {1320,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_SPACING: %s.\nCorrect syntax "
     "is \"SPACING cutSpacing [CENTERTOCENTER][SAMENET]\n\t[LAYER "
     "secondLayerName[STACK]\n\t| ADJACENTCUTS {2 | 3 | 4} WITHIN cutWithin "
     "[EXCEPTSAMEPGNET]\n\t| PARALLELOVERLAP\n\t| AREA cutArea ;\"",
     -1,
     0},
    {1321,
     EMS_NONE,
     "The property LEF57_SPACING with value %s is for TYPE CUT only.\nThe "
     "current layer has the TYPE %s.\nUpdate the property of your lef file "
     "with the correct syntax or remove this property from your lef file",
     -1,
     0},
    {1322,
     EMS_NONE,
     "The property LEF57_SPACING with value %s is for TYPE ROUTING only.\nThe "
     "current layer has the TYPE %s.\nUpdate the property of your lef file "
     "with the correct syntax or remove this property from your lef file.",
     -1,
     0},
    {1323,
     EMS_NONE,
     "The property LEF57_MINSTEP with value %s is for TYPE ROUTING only.\nThe "
     "current layer has the TYPE %s.\nUpdate the property of your lef file "
     "with the correct syntax or remove this property from your lef file.",
     -1,
     0},
    {1324,
     EMS_NONE,
     "Incorrect syntax defined for the statement TWOWIDTHS.\nSpacing, which is "
     "required, is not defined.",
     -1,
     0},
    {1325,
     EMS_NONE,
     "Property LEF58_TYPE was added in incorrect layer type.\nIt has the value "
     "%s which is for layer type ROUTING.\nThe layer type is %s.\n",
     -1,
     0},
    {1326,
     EMS_NONE,
     "Property LEF58_TYPE was added in incorrect layer type.\nIt has the value "
     "%s which is for layer type CUT.\nThe layer type is %s.\n",
     -1,
     0},
    {1327,
     EMS_NONE,
     "Property LEF58_TYPE was added in incorrect layer type.\nIt has the value "
     "%s which is for layer type MASTERSLICE.\nThe layer type is %s.\n",
     -1,
     0},
    {1328,
     EMS_NONE,
     "Property LEF58_TYPE has incorrect layer type %s.\nValue layer type are: "
     "POLYROUTING, MIMCAP, TSV, PASSIVATION, NWELL or PWELL.\n",
     -1,
     0},
    {1329,
     EMS_NONE,
     "Incorrect syntax defined for property LEF58_TYPE: %s\nCorrect syntax is "
     "\"TYPE POLYROUTING | MINCAP | TSV | PASSIVATION | NWELL | PWELL ;\"\n",
     -1,
     0},
    {1330,
     EMS_NONE,
     "Incorrect syntax defined for property LEF57_ENCLOSURE: %s\nCorrect "
     "syntax is \"ENCLOSURE [ABOVE|BELOW] overhang1 overhang2\n\t[WIDTH "
     "minWidth [EXCEPTEXTRACUT cutWithin]\n\t|LENGTH minLength] ;\"\n",
     -1,
     0},
    {1331,
     EMS_NONE,
     "The property LEF57_ENCLOSURE with value %s is for TYPE CUT only.\nThe "
     "current layer has the TYPE %s.\nUpdate the property of your lef file "
     "with the correct syntax or remove this property from your lef file.\n",
     -1,
     0},
    {1350,
     EMS_NONE,
     "The index number %d given for the macro PIN is invalid.\nValid index is "
     "from 0 to %d",
     -1,
     0},
    {1351,
     EMS_NONE,
     "There is an unexpected lef parser bug which cause it unable to retrieve "
     "ANTENNAMODEL data with the given index.",
     -1,
     0},
    {1352,
     EMS_NONE,
     "The index number %d given for the macro property is invalid.\nValid "
     "index is from 0 to %d",
     -1,
     0},
    {1360,
     EMS_NONE,
     "The index number %d given for the geometry item is invalid.\nValid index "
     "is from 0 to %d.",
     -1,
     0},
    {1361,
     EMS_NONE,
     "The index number %d given for the geometry RECTANGLE is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1362,
     EMS_NONE,
     "The index number %d given for the geometry RECTANGLE ITERATE is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1363,
     EMS_NONE,
     "The index number %d given for the geometry PATH is invalid.\nValid index "
     "is from 0 to %d.",
     -1,
     0},
    {1364,
     EMS_NONE,
     "The index number %d given for the geometry PATH ITERATE is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1365,
     EMS_NONE,
     "The index number %d given for the geometry LAYER is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1366,
     EMS_NONE,
     "The index number %d given for the geometry LAYER EXCEPT PG NET is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1367,
     EMS_NONE,
     "The index number %d given for the geometry LAYER MINSPACING is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1368,
     EMS_NONE,
     "The index number %d given for the geometry LAYER RULE WIDTH is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1369,
     EMS_NONE,
     "The index number %d given for the geometry WIDTH is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1370,
     EMS_NONE,
     "The index number %d given for the geometry POLYGON is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1371,
     EMS_NONE,
     "The index number %d given for the geometry POLYGON ITERATE is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1372,
     EMS_NONE,
     "The index number %d given for the geometry CLASS is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1373,
     EMS_NONE,
     "The index number %d given for the geometry VIA is invalid.\nValid index "
     "is from 0 to %d.",
     -1,
     0},
    {1374,
     EMS_NONE,
     "The index number %d given for the geometry VIA ITERATE is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1375, EMS_NONE, "unknown geometry type.", -1, 0},
    {1376,
     EMS_NONE,
     "The index number %d given for the IRDROP is invalid.\nValid index is "
     "from 0 to %d.",
     -1,
     0},
    {1377,
     EMS_NONE,
     "The index number %d given for the TRACK PATTERN  is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1400, EMS_NONE, "Invalid nondefaultvia callback.", -1, 0},
    {1401, EMS_NONE, "Invalid nondefaultspacing callback.", -1, 0},
    {1402,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT LAYER is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1403,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT VIA is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1404,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT SPACING is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1405,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT USE VIA is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1406,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT USE VIARULE is "
     "invalid.\nValid index is from 0 to %d.",
     -1,
     0},
    {1407,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT CUT is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1408,
     EMS_NONE,
     "The index number %d given for the NONDEFAULT PROPERTY is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1420,
     EMS_NONE,
     "The index number %d given for the VIA LAYER RECTANGLE is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1421,
     EMS_NONE,
     "The layer number %d given for the VIA LAYER is invalid.\nValid number is "
     "from 0 to %d.",
     -1,
     0},
    {1422,
     EMS_NONE,
     "The layer number %d given for the VIA PROPERTY is invalid.\nValid number "
     "is from 0 to %d.",
     -1,
     0},
    {1430, EMS_NONE, "too many via rule layers.", -1, 0},
    {1431,
     EMS_NONE,
     "The index number %d given for the VIARULE PROPERTY is invalid.\nValid "
     "index is from 0 to %d.",
     -1,
     0},
    {1501,
     EMS_NONE,
     "Error found when processing LEF file '%s'\nUnit %d is a version 5.6 or "
     "later syntax\nYour lef file is defined with version %g.",
     -1,
     0},
    {1502,
     EMS_NONE,
     "The value %d defined for LEF UNITS DATABASE MICRONS is invalid\n. "
     "Correct value is 100, 200, 1000, 2000, 10000, or 20000",
     -1,
     0},
    {1503,
     EMS_NONE,
     "Lef parser 5.7 does not support lef file with version %s. Parser will "
     "stop processing.",
     -1,
     0},
    {1504,
     EMS_NONE,
     "NAMESCASESENSITIVE statement is set with OFF.\nStarting version 5.6, "
     "NAMESCASENSITIVE is obsolete,\nif it is defined, it has to have the ON "
     "value.\nParser will stop processing.",
     -1,
     0},
    {1505,
     EMS_NONE,
     "MANUFACTURINGGRID statement was defined before UNITS.\nRefer to the LEF "
     "Language Reference manual for the order of LEF statements.",
     -1,
     0},
    {1506,
     EMS_NONE,
     "A MAXVIASTACK statement is defined before the LAYER statement.\nRefer to "
     "the LEF Language Reference manual for the order of LEF statements.",
     -1,
     0},
    {1507,
     EMS_NONE,
     "END LAYER name %s is different from the LAYER name %s.\nCorrect the LEF "
     "file before rerunning it through the LEF parser.",
     -1,
     0},
    {1508,
     EMS_NONE,
     "TYPE statement is a required statement in a LAYER and it is not defined.",
     -1,
     0},
    {1509,
     EMS_NONE,
     "PITCH statement is a required statement in a LAYER with TYPE ROUTING and "
     "it is not defined.",
     -1,
     0},
    {1510,
     EMS_NONE,
     "WIDTH statement is a required statement in a LAYER with TYPE ROUTING and "
     "it is not defined.",
     -1,
     0},
    {1511,
     EMS_NONE,
     "The DIRECTION statement which is required in a LAYER with TYPE ROUTING "
     "is not defined in LAYER %s.\nUpdate your lef file and add the DIRECTION "
     "statement for layer %s.",
     -1,
     0},
    {1512,
     EMS_NONE,
     "It is incorrect to define a SPACING statement in LAYER with TYPE "
     "MASTERSLICE or OVERLAP. Parser will stop processing.",
     -1,
     0},
    {1513,
     EMS_NONE,
     "DIRECTION statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1514,
     EMS_NONE,
     "RESISTANCE statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1515,
     EMS_NONE,
     "RESISTANCE statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1516,
     EMS_NONE,
     "CAPACITANCE statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1517,
     EMS_NONE,
     "CAPACITANCE statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1518,
     EMS_NONE,
     "HEIGHT statement can only be defined in LAYER with TYPE ROUTING. Parser "
     "will stop processing.",
     -1,
     0},
    {1519,
     EMS_NONE,
     "WIREEXTENSION statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1520,
     EMS_NONE,
     "THICKNESS statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1521,
     EMS_NONE,
     "SHRINKAGE statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1522,
     EMS_NONE,
     "CAPMULTIPLIER statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1523,
     EMS_NONE,
     "EDGECAPACITANCE statement can only be defined in LAYER with TYPE "
     "ROUTING. Parser will stop processing.",
     -1,
     0},
    {1524,
     EMS_NONE,
     "ANTENNAAREAFACTOR statement can only be defined in LAYER with TYPE "
     "ROUTING. Parser will stop processing.",
     -1,
     0},
    {1525,
     EMS_NONE,
     "ANTENNALENGTHFACTOR statement can only be defined in LAYER with TYPE "
     "ROUTING. Parser will stop processing.",
     -1,
     0},
    {1526,
     EMS_NONE,
     "ANTENNALENGTHFACTOR statement is a version 5.3 or earlier syntax.\nYour "
     "lef file with version %g, has both old and new ANTENNALENGTHFACTOR "
     "syntax, which is incorrect.",
     -1,
     0},
    {1527,
     EMS_NONE,
     "ACCURRENTDENSITY statement can't be defined in LAYER with TYPE "
     "MASTERSLICE or OVERLAP. Parser will stop processing.",
     -1,
     0},
    {1528,
     EMS_NONE,
     "DCCURRENTDENSITY statement can't be defined in LAYER with TYPE "
     "MASTERSLICE or OVERLAP. Parser will stop processing.",
     -1,
     0},
    {1529,
     EMS_NONE,
     "CUTAREA statement can only be defined in LAYER with TYPE CUT. Parser "
     "will stop processing.",
     -1,
     0},
    {1530,
     EMS_NONE,
     "WIDTH statement can only be defined in LAYER with TYPE ROUTING. Parser "
     "will stop processing.",
     -1,
     0},
    {1531,
     EMS_NONE,
     "ANTENNAAREARATIO statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1532,
     EMS_NONE,
     "ANTENNADIFFAREARATIO statement is a version 5.4 or earlier syntax.\nYour "
     "lef file with version %g, has both old and new ANTENNAAREARATIO syntax, "
     "which is incorrect.",
     -1,
     0},
    {1533,
     EMS_NONE,
     "ANTENNAAREARATIO statement can only be defined in LAYER with TYPE "
     "ROUTING or CUT. Parser will stop processing.",
     -1,
     0},
    {1534,
     EMS_NONE,
     "ANTENNADIFFAREARATIO statement can only be defined in LAYER with TYPE "
     "ROUTING or CUT. Parser will stop processing.",
     -1,
     0},
    {1535,
     EMS_NONE,
     "ANTENNACUMAREARATIO statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1536,
     EMS_NONE,
     "ANTENNACUMAREARATIO statement is a version 5.4 or earlier old "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNACUMAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1537,
     EMS_NONE,
     "ANTENNACUMAREARATIO statement can only be defined in LAYER with TYPE "
     "ROUTING or CUT. Parser will stop processing.",
     -1,
     0},
    {1538,
     EMS_NONE,
     "ANTENNACUMDIFFAREARATIO statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1539,
     EMS_NONE,
     "ANTENNACUMDIFFAREARATIO statement is a version 5.4 or earlier old "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNACUMDIFFAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1540,
     EMS_NONE,
     "ANTENNACUMDIFFAREARATIO statement can only be defined in LAYER with TYPE "
     "ROUTING or CUT. Parser will stop processing.",
     -1,
     0},
    {1541,
     EMS_NONE,
     "ANTENNAAREAFACTOR can only be defined in LAYER with TYPE ROUTING or CUT. "
     "Parser will stop processing.",
     -1,
     0},
    {1542,
     EMS_NONE,
     "ANTENNASIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1543,
     EMS_NONE,
     "ANTENNASIDEAREARATIO statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1544,
     EMS_NONE,
     "ANTENNASIDEAREARATIO statement is a version 5.4 or earlier old "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNASIDEAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1545,
     EMS_NONE,
     "ANTENNADIFFSIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1546,
     EMS_NONE,
     "ANTENNADIFFSIDEAREARATIO statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1547,
     EMS_NONE,
     "ANTENNADIFFSIDEAREARATIO statement is a version 5.4 or earlier "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNADIFFSIDEAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1548,
     EMS_NONE,
     "ANTENNACUMSIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1549,
     EMS_NONE,
     "ANTENNACUMSIDEAREARATIO statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1550,
     EMS_NONE,
     "ANTENNACUMSIDEAREARATIO statement is a version 5.4 or earlier "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNACUMSIDEAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1551,
     EMS_NONE,
     "ANTENNACUMDIFFSIDEAREARATIO can only be defined in LAYER with TYPE "
     "ROUTING. Parser will stop processing.",
     -1,
     0},
    {1552,
     EMS_NONE,
     "ANTENNACUMDIFFSIDEAREARATIO statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1553,
     EMS_NONE,
     "ANTENNACUMDIFFSIDEAREARATIO statement is a version 5.4 or earlier "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNACUMDIFFSIDEAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1554,
     EMS_NONE,
     "ANTENNASIDEAREAFACTOR can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1555,
     EMS_NONE,
     "ANTENNASIDEAREAFACTOR statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1556,
     EMS_NONE,
     "ANTENNASIDEAREAFACTOR statement is a version 5.4 or earlier "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNASIDEAREAFACTOR syntax, which is incorrect.",
     -1,
     0},
    {1557,
     EMS_NONE,
     "ANTENNAMODEL can only be defined in LAYER with TYPE ROUTING. Parser will "
     "stop processing.",
     -1,
     0},
    {1558,
     EMS_NONE,
     "ANTENNAMODEL statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1559,
     EMS_NONE,
     "ANTENNAMODEL statement is a version 5.4 or earlier syntax.\nYour lef "
     "file with version %g, has both old and new ANTENNAMODEL syntax, which is "
     "incorrect.",
     -1,
     0},
    {1560,
     EMS_NONE,
     "ANTENNACUMROUTINGPLUSCUT can only be defined in LAYER with TYPE ROUTING "
     "or CUT. Parser will stop processing.",
     -1,
     0},
    {1561,
     EMS_NONE,
     "ANTENNAGATEPLUSDIFF can only be defined in LAYER with TYPE ROUTING or "
     "CUT. Parser will stop processing.",
     -1,
     0},
    {1562,
     EMS_NONE,
     "ANTENNAAREAMINUSDIFF can only be defined in LAYER with TYPE ROUTING or "
     "CUT. Parser will stop processing.",
     -1,
     0},
    {1563,
     EMS_NONE,
     "ANTENNAAREADIFFREDUCEPWL can only be defined in LAYER with TYPE ROUTING "
     "or CUT. Parser will stop processing.",
     -1,
     0},
    {1564,
     EMS_NONE,
     "SLOTWIREWIDTH statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1565,
     EMS_NONE,
     "SLOTWIRELENGTH statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1566,
     EMS_NONE,
     "SLOTWIDTH statement is a version 5.4 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1567,
     EMS_NONE,
     "SLOTLENGTH statement is a version 5.4 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1568,
     EMS_NONE,
     "MAXADJACENTSLOTSPACING statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1569,
     EMS_NONE,
     "MAXCOAXIALSLOTSPACING statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1570,
     EMS_NONE,
     "MAXEDGESLOTSPACING statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1571,
     EMS_NONE,
     "SPLITWIREWIDTH statement is a version 5.4 and later syntax.\n Your lef "
     "file is defined with version %g.",
     -1,
     0},
    {1572,
     EMS_NONE,
     "MINIMUMDENSITY statement is a version 5.4 and later syntax.\n Your lef "
     "file is defined with version %g.",
     -1,
     0},
    {1573,
     EMS_NONE,
     "MAXIMUMDENSITY statement is a version 5.4 and later syntax.\n Your lef "
     "file is defined with version %g.",
     -1,
     0},
    {1574,
     EMS_NONE,
     "DENSITYCHECKWINDOW statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1575,
     EMS_NONE,
     "DENSITYCHECKSTEP statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1576,
     EMS_NONE,
     "FILLACTIVESPACING statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1577,
     EMS_NONE,
     "MAXWIDTH statement can only be defined in LAYER with TYPE ROUTING.  "
     "Parser will stop processing.",
     -1,
     0},
    {1578,
     EMS_NONE,
     "MAXWIDTH statement is a version 5.5 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1579,
     EMS_NONE,
     "MINWIDTH statement can only be defined in LAYER with TYPE ROUTING.  "
     "Parser will stop processing.",
     -1,
     0},
    {1580,
     EMS_NONE,
     "MINWIDTH statement is a version 5.5 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1581,
     EMS_NONE,
     "MINENCLOSEDAREA statement is a version 5.5 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1582,
     EMS_NONE,
     "PROTRUSION RULE statement is a version 5.5 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1583,
     EMS_NONE,
     "SPACINGTABLE statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1584,
     EMS_NONE,
     "ENCLOSURE statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1585,
     EMS_NONE,
     "PREFERENCLOSURE statement is a version 5.6 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1586,
     EMS_NONE,
     "RESISTANCE statement is a version 5.6 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1587,
     EMS_NONE,
     "DIAGMINEDGELENGTH can only be defined in LAYER with TYPE ROUTING. Parser "
     "will stop processing.",
     -1,
     0},
    {1588,
     EMS_NONE,
     "DIAGMINEDGELENGTH statement is a version 5.6 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1589,
     EMS_NONE,
     "An INFLUENCE table statement was defined before the PARALLELRUNLENGTH "
     "table statement.\nINFLUENCE table statement should be defined following "
     "the PARALLELRUNLENGTH.\nChange the LEF file and rerunning the parser.",
     -1,
     0},
    {1590,
     EMS_NONE,
     "There is multiple PARALLELRUNLENGTH table statements are defined within "
     "a layer.\nAccording to the LEF Reference Manual, only one "
     "PARALLELRUNLENGTH table statement is allowed per layer.",
     -1,
     0},
    {1591,
     EMS_NONE,
     "The total number of lengths defined in the PARALLELRUNLENGTH statement "
     "is not equal to\nthe  total number of spacings defined in the WIDTH "
     "statement in the SPACINGTABLE.",
     -1,
     0},
    {1592,
     EMS_NONE,
     "A PARALLELRUNLENGTH statement was already defined in the layer.\nIt is "
     "PARALLELRUNLENGTH or TOWWIDTHS is allowed per layer.",
     -1,
     0},
    {1593,
     EMS_NONE,
     "A TWOWIDTHS table statement was already defined in the layer.\nOnly one "
     "TWOWIDTHS statement is allowed per layer.",
     -1,
     0},
    {1594,
     EMS_NONE,
     "A INFLUENCE table statement was already defined in the layer.\nOnly one "
     "INFLUENCE statement is allowed per layer.",
     -1,
     0},
    {1595,
     EMS_NONE,
     "An INFLUENCE table statement was already defined before the "
     "layer.\nINFLUENCE statement has to be defined after the "
     "PARALLELRUNLENGTH table statement in the layer.",
     -1,
     0},
    {1596,
     EMS_NONE,
     "FROMABOVE statement is a version 5.5 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1597,
     EMS_NONE,
     "FROMBELOW statement is a version 5.5 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1598,
     EMS_NONE,
     "LENGTH WITHIN statement is a version 5.5 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1599,
     EMS_NONE,
     "ANTENNAAREAFACTOR with DIFFUSEONLY statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1600,
     EMS_NONE,
     "CUTAREA statement can only be defined in LAYER with TYPE CUT.",
     -1,
     0},
    {1601,
     EMS_NONE,
     "WIDTH can only be defined in LAYER with TYPE ROUTING.",
     -1,
     0},
    {1602,
     EMS_NONE,
     "MAXVIASTACK statement has to be defined after the LAYER statement.",
     -1,
     0},
    {1603,
     EMS_NONE,
     "A MAXVIASTACK was already defined.\nOnly one MAXVIASTACK is allowed per "
     "lef file.",
     -1,
     0},
    {1604,
     EMS_NONE,
     "MAXVIASTACK statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1605,
     EMS_NONE,
     "DEFAULT statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1606,
     EMS_NONE,
     "A LAYER statement is missing in the VIA %s.\nAt least one LAYER is "
     "required per VIA statement.",
     -1,
     0},
    {1607,
     EMS_NONE,
     "END VIA name %s is different from the VIA name %s.\nCorrect the LEF file "
     "before rerunning it through the LEF parser.",
     -1,
     0},
    {1608, EMS_NONE, "A VIARULE statement requires two layers.", -1, 0},
    {1609,
     EMS_NONE,
     "A DIRECTION statement was already defined in the layer.\nIt is DIRECTION "
     "or ENCLOSURE can be specified in a layer.",
     -1,
     0},
    {1610,
     EMS_NONE,
     "An OVERHANG statement is defined, but the required DIRECTION statement "
     "is not yet defined.\nUpdate the LEF file to define the DIRECTION "
     "statement before the OVERHANG.",
     -1,
     0},
    {1611,
     EMS_NONE,
     "An OVERHANG statement is defined in a VIARULE statement only.\nOVERHANG "
     "statement can only be defined in VIARULE GENERATE.",
     -1,
     0},
    {1612,
     EMS_NONE,
     "An METALOVERHANG statement is defined in a VIARULE statement "
     "only.\nOVERHANG statement can only be defined in VIARULE GENERATE.",
     -1,
     0},
    {1613,
     EMS_NONE,
     "An METALOVERHANG statement is defined, but the required DIRECTION "
     "statement is not yet defined.\nUpdate the LEF file to define the "
     "DIRECTION statement before the OVERHANG.",
     -1,
     0},
    {1614,
     EMS_NONE,
     "An ENCLOSURE statement is defined in a VIARULE statement only.\nOVERHANG "
     "statement can only be defined in VIARULE GENERATE.",
     -1,
     0},
    {1615,
     EMS_NONE,
     "END VIARULE name %s is different from the VIARULE name %s.\nCorrect the "
     "LEF file before rerunning it through the LEF parser.",
     -1,
     0},
    {1616,
     EMS_NONE,
     "SAMENET statement is required inside SPACING for any lef file with "
     "version 5.4 and earlier, but is not defined in the parsed lef file.",
     -1,
     0},
    {1617,
     EMS_NONE,
     "NONDEFAULTRULE statement requires at least one LAYER statement.",
     -1,
     0},
    {1618,
     EMS_NONE,
     "NONDEFAULTRULE statement requires at least one VIA statement.",
     -1,
     0},
    {1619,
     EMS_NONE,
     "END NONDEFAULTRULE name %s is different from the NONDEFAULTRULE name "
     "%s.\nCorrect the LEF file before rerunning it through the LEF parser.",
     -1,
     0},
    {1620,
     EMS_NONE,
     "HARDSPACING statement is a version 5.6 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1621,
     EMS_NONE,
     "USEVIA statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1622,
     EMS_NONE,
     "USEVIARULE statement is a version 5.6 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1623,
     EMS_NONE,
     "MINCUTS statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1624,
     EMS_NONE,
     "END LAYER name %s is different from the LAYER name %s.\nCorrect the LEF "
     "file before rerunning it through the LEF parser.",
     -1,
     0},
    {1625,
     EMS_NONE,
     "A WIDTH statement is required in the LAYER statement in NONDEFAULTRULE.",
     -1,
     0},
    {1626,
     EMS_NONE,
     "A SPACING statement is required in the LAYER statement in NONDEFAULTRULE "
     "for lef file with version 5.5 and earlier.\nYour lef file is defined "
     "with version %g. Update your lef to add a LAYER statement and try again.",
     -1,
     0},
    {1627,
     EMS_NONE,
     "RESISTANCE RPERSQ statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1628,
     EMS_NONE,
     "CAPACITANCE CPERSQDIST statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1629,
     EMS_NONE,
     "EDGECAPACITANCE statement is a version 5.4 and later syntax.\n Your lef "
     "file is defined with version %g.",
     -1,
     0},
    {1630,
     EMS_NONE,
     "DIAGWIDTH statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1631,
     EMS_NONE,
     "END SITE name %s is different from the SITE name %s.\nCorrect the LEF "
     "file before rerunning it through the LEF parser.",
     -1,
     0},
    {1632,
     EMS_NONE,
     "A CLASS statement is required in the SITE statement.",
     -1,
     0},
    {1633,
     EMS_NONE,
     "A SIZE  statement is required in the SITE statement.",
     -1,
     0},
    {1634,
     EMS_NONE,
     "END MACRO name %s is different from the MACRO name %s.\nCorrect the LEF "
     "file before rerunning it through the LEF parser.",
     -1,
     0},
    {1635,
     EMS_NONE,
     "COVER BUMP statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1636,
     EMS_NONE,
     "BLOCK BLACKBOX statement is a version 5.5 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1637,
     EMS_NONE,
     "BLOCK SOFT statement is a version 5.6 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1638,
     EMS_NONE,
     "PAD AREAIO statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1639,
     EMS_NONE,
     "SPACER statement is a version 5.4 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1640,
     EMS_NONE,
     "ANTENNACELL statement is a version 5.4 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1641,
     EMS_NONE,
     "WELLTAP statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1642,
     EMS_NONE,
     "ORIGIN statement has been defined more than once in a MACRO "
     "statement.\nOnly one ORIGIN statement can be defined in a Macro.\nParser "
     "will stop processing.",
     -1,
     0},
    {1643,
     EMS_NONE,
     "END PIN name %s is different from the PIN name %s.\nCorrect the LEF file "
     "before rerunning it through the LEF parser.",
     -1,
     0},
    {1644,
     EMS_NONE,
     "ANTENNASIZE statement is a version 5.3 and earlier syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1645,
     EMS_NONE,
     "ANTENNAMETALAREA statement is a version 5.3 and earlier syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1646,
     EMS_NONE,
     "ANTENNAMETALLENGTH statement is a version 5.3 and earlier syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1647,
     EMS_NONE,
     "ANTENNAPARTIALMETALAREA statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1648,
     EMS_NONE,
     "ANTENNAPARTIALMETALSIDEAREA statement is a version 5.4 and later "
     "syntax.\nYour lef file is defined with version %g.",
     -1,
     0},
    {1649,
     EMS_NONE,
     "ANTENNAPARTIALCUTAREA statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1650,
     EMS_NONE,
     "ANTENNADIFFAREA statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1651,
     EMS_NONE,
     "ANTENNAGATEAREA statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1652,
     EMS_NONE,
     "ANTENNAMAXAREACAR statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1653,
     EMS_NONE,
     "ANTENNAMAXSIDEAREACAR statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1654,
     EMS_NONE,
     "ANTENNAMAXCUTCAR statement is a version 5.4 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1655,
     EMS_NONE,
     "ANTENNAMODEL statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1656,
     EMS_NONE,
     "NETEXPR statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1657,
     EMS_NONE,
     "SUPPLYSENSITIVITY statement is a version 5.6 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1658,
     EMS_NONE,
     "GROUNDSENSITIVITY statement is a version 5.6 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1659,
     EMS_NONE,
     "THE SPACING statement has the value %g in MACRO OBS.\nValue has to be 0 "
     "or greater.",
     -1,
     0},
    {1660,
     EMS_NONE,
     "THE DESIGNRULEWIDTH statement has the value %g in MACRO OBS.\nValue has "
     "to be 0 or greater.",
     -1,
     0},
    {1661,
     EMS_NONE,
     "DENSITY statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1662,
     EMS_NONE,
     "END ARRAY name %s is different from the ARRAY name %s.\nCorrect the LEF "
     "file before rerunning it through the LEF parser.",
     -1,
     0},
    {1663,
     EMS_NONE,
     "A CENTERTOCENTER statement was already defined in "
     "SPACING\nCENTERTOCENTER can only be defined once per LAYER CUT SPACING.",
     -1,
     0},
    {1664,
     EMS_NONE,
     "CENTERTOCENTER statement is a version 5.6 and later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1665,
     EMS_NONE,
     "A SAMENET statement was already defined in SPACING\nSAMENET can only be "
     "defined once per LAYER CUT SPACING.",
     -1,
     0},
    {1666,
     EMS_NONE,
     "A PARALLELOVERLAP statement was already defined in "
     "SPACING\nPARALLELOVERLAP can only be defined once per LAYER CUT SPACING.",
     -1,
     0},
    {1667,
     EMS_NONE,
     "A SAMENET statement was already defined in SPACING\nEither SAMENET or "
     "LAYER can be defined, but not both.",
     -1,
     0},
    {1668,
     EMS_NONE,
     "ADJACENTCUTS statement is a version 5.5 and later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1669,
     EMS_NONE,
     "A SAMENET statement was already defined in SPACING\nEither SAMENET or "
     "ADJACENTCUTS can be defined, but not both.",
     -1,
     0},
    {1670,
     EMS_NONE,
     "A SAMENET statement was already defined in SPACING\nEither SAMENET or "
     "AREA can be defined, but not both.",
     -1,
     0},
    {1671,
     EMS_NONE,
     "INPUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour "
     "lef file with version %g, has both old and new INPUTPINANTENNASIZE "
     "syntax, which is incorrect.",
     -1,
     0},
    {1672,
     EMS_NONE,
     "OUTPUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour "
     "lef file with version %g, has both old and new OUTPUTPINANTENNASIZE "
     "syntax, which is incorrect.",
     -1,
     0},
    {1673,
     EMS_NONE,
     "INOUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour "
     "lef file with version %g, has both old and new INOUTPINANTENNASIZE "
     "syntax, which is incorrect.",
     -1,
     0},
    {1674,
     EMS_NONE,
     "ANTENNAINPUTGATEAREA statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.\nEither update your VERSION number "
     "to 5.4 or later, or use the 5.3 syntax:\n{ INPUTINATENNASIZE | "
     "OUTPUTPINANTENNASIZE | INOUTPINANTENNASIZE } value.",
     -1,
     0},
    {1675,
     EMS_NONE,
     "ANTENNAINPUTGATEAREA statement is a version 5.4 or later syntax.\nYour "
     "lef file with version %g, has both old and new ANTENNAINPUTGATEAREA "
     "syntax, which is incorrect.",
     -1,
     0},
    {1676,
     EMS_NONE,
     "ANTENNAINOUTDIFFAREA statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.\nEither update your VERSION number "
     "to 5.4 or later, or use the 5.3 syntax:\n{ INPUTINATENNASIZE | "
     "OUTPUTPINANTENNASIZE | INOUTPINANTENNASIZE } value.",
     -1,
     0},
    {1677,
     EMS_NONE,
     "ANTENNAINOUTDIFFAREA statement is a version 5.4 or later syntax.\nYour "
     "lef file with version %g, has both old and new ANTENNAINOUTDIFFAREA "
     "syntax, which is incorrect.",
     -1,
     0},
    {1678,
     EMS_NONE,
     "ANTENNAOUTPUTDIFFAREA statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.\nEither update your VERSION number "
     "to 5.4 or later, or use the 5.3 syntax:\n{ INPUTINATENNASIZE | "
     "OUTPUTPINANTENNASIZE | INOUTPINANTENNASIZE } value..",
     -1,
     0},
    {1679,
     EMS_NONE,
     "ANTENNAOUTPUTDIFFAREA statement is a version 5.4 or later syntax.\nYour "
     "lef file with version %g, has both old and new ANTENNAOUTPUTDIFFAREA "
     "syntax, which is incorrect.",
     -1,
     0},
    {1680,
     EMS_NONE,
     "PARALLELOVERLAP is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1681,
     EMS_NONE,
     "ENDOFLINE is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1682,
     EMS_NONE,
     "NOTCHLENGTH is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1683,
     EMS_NONE,
     "EXCEPTSAMEPGNET is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1684,
     EMS_NONE,
     "SAMENET is a version 5.7 or later syntax.\nYour lef file is defined with "
     "version %g.",
     -1,
     0},
    {1685,
     EMS_NONE,
     "ARRAYSPACING is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1686,
     EMS_NONE,
     "ANTENNACUMROUTINGPLUSCUT is a version 5.7 or later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1687,
     EMS_NONE,
     "ANTENNAGATEPLUSDIFF is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1688,
     EMS_NONE,
     "ANTENNAAREAMINUSDIFF is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1689,
     EMS_NONE,
     "ANTENNAAREADIFFREDUCEPWL is a version 5.7 or later syntax.\nYour lef "
     "file is defined with version %g.",
     -1,
     0},
    {1690,
     EMS_NONE,
     "EXCEPTEXTRACUT is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1691,
     EMS_NONE,
     "LENGTH is a version 5.7 or later syntax.\nYour lef file is defined with "
     "version %g.",
     -1,
     0},
    {1693,
     EMS_NONE,
     "AREA is a version 5.7 or later syntax.\nYour lef file is defined with "
     "version %g.",
     -1,
     0},
    {1694,
     EMS_NONE,
     "SPACINGTABLE ORTHOGONAL is a version 5.7 or later syntax.\nYour lef file "
     "is defined with version %g.",
     -1,
     0},
    {1696,
     EMS_NONE,
     "ENDOFNOTCHWIDTH is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1697,
     EMS_NONE,
     "TWOWIDTHS is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1698,
     EMS_NONE,
     "BUMP is a version 5.7 or later syntax.\nYour lef file is defined with "
     "version %g.",
     -1,
     0},
    {1699,
     EMS_NONE,
     "EXCEPTPGNET is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1700,
     EMS_NONE,
     "MINIMUMCUT WITHIN is a version 5.7 or later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1701,
     EMS_NONE,
     "A LAYER statement is missing in Geometry.\nLAYER is a required statement "
     "before any geometry can be defined.",
     -1,
     0},
    {1702,
     EMS_NONE,
     "CURRENTDEN statement can only be defined in LAYER with TYPE ROUTING. "
     "Parser will stop processing.",
     -1,
     0},
    {1703,
     EMS_NONE,
     "ANTENNADIFFAREARATIO statement is a version 5.4 and later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1704,
     EMS_NONE,
     "ANTENNADIFFAREARATIO statement is a version 5.4 or earlier old "
     "syntax.\nYour lef file with version %g, has both old and new "
     "ANTENNADIFFAREARATIO syntax, which is incorrect.",
     -1,
     0},
    {1705,
     EMS_NONE,
     "VIARULE statement in a layer, requires a DIRECTION construct statement.",
     -1,
     0},
    {1706,
     EMS_NONE,
     "An ENCLOSURE statement was already defined in the layer.\nIt is "
     "DIRECTION or ENCLOSURE can be specified in a layer.",
     -1,
     0},
    {1707,
     EMS_NONE,
     "ENCLOSURE statement is a version 5.5 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1708, EMS_NONE, "A VIARULE GENERATE requires three layers.", -1, 0},
    {1709,
     EMS_NONE,
     "VIARULE statement is a version 5.6 and later syntax.\nYour lef file is "
     "defined with version %g.",
     -1,
     0},
    {1710,
     EMS_NONE,
     "MAXEDGES is a version 5.7 or later syntax.\nYour lef file is defined "
     "with version %g.",
     -1,
     0},
    {1711,
     EMS_NONE,
     "NOSHAREDEDGE in LAYER ENCLOSURE is a version 5.8 or later syntax.\nYour "
     "lef file is defined with version %g.",
     -1,
     0},
    {1712,
     EMS_NONE,
     "MINFEATURE statement was defined before UNITS.\nRefer the LEF Language "
     "Reference manual for the order of LEF statements.",
     -1,
     0},
    {2000,
     EMS_NONE,
     "String has exceeded 4096 characters, extra characters are truncated.",
     -1,
     0},
    {2001,
     EMS_NONE,
     "VERSION is a required statement on LEF file with version 5.5 and "
     "earlier.\nWithout VERSION defined, the LEF file is technically "
     "incorrect.\nRefer to the LEF/DEF 5.5 or earlier Language Reference "
     "manual on how to defined this statement.",
     -1,
     0},
    {2002,
     EMS_NONE,
     "NAMESCASESENSITIVE is a required statement on LEF file with version 5.5 "
     "and earlier.\nWithout NAMESCASESENSITIVE defined, the LEF file is "
     "technically incorrect.\nRefer to the LEF/DEF 5.5 or earlier Language "
     "Reference manual on how to define this statement.",
     -1,
     0},
    {2003,
     EMS_NONE,
     "BUSBITCHARS is a required statement on LEF file with version 5.5 and "
     "earlier.\nWithout BUSBITCHARS defined, the LEF file is technically "
     "incorrect.\nRefer to the LEF/DEF 5.5 or earlier Language Reference "
     "manual on how to define this statement.",
     -1,
     0},
    {2004,
     EMS_NONE,
     "DIVIDERCHAR is a required statement on LEF file with version 5.5 and "
     "earlier.\nWithout DIVIDECHAR defined, the LEF file is technically "
     "incorrect.\nRefer to the LEF/DEF 5.5 or earlier Language Reference "
     "manual on how to define this statement.",
     -1,
     0},
    {2005,
     EMS_NONE,
     "DIVIDERCHAR has an invalid null value. Value is set to default /",
     -1,
     0},
    {2006,
     EMS_NONE,
     "BUSBITCHAR has an invalid null value. Value is set to default []",
     -1,
     0},
    {2007,
     EMS_NONE,
     "NAMESCASESENSITIVE statement is obsolete in version 5.6 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.6 or "
     "later.",
     -1,
     0},
    {2008,
     EMS_NONE,
     "NOWIREEXTENSIONATPIN statement is obsolete in version 5.6 or later.\nThe "
     "NOWIREEXTENSIONATPIN statement will be ignored.",
     -1,
     0},
    {2009,
     EMS_NONE,
     "USEMINSPACING PIN statement is obsolete in version 5.6 or later.\n The "
     "USEMINSPACING PIN statement will be ignored.",
     -1,
     0},
    {2010,
     EMS_NONE,
     "It is incorrect to have both SPACING rules & SPACINGTABLE rules within a "
     "ROUTING layer.",
     -1,
     0},
    {2011,
     EMS_NONE,
     "SLOTWIREWIDTH statement is obsolete in version 5.7 or later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.7 or later.",
     -1,
     0},
    {2012,
     EMS_NONE,
     "SLOTWIRELENGTH statement is obsolete in version 5.7 or later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.7 or later.",
     -1,
     0},
    {2013,
     EMS_NONE,
     "SLOTWIDTH statement is obsolete in version 5.7 or later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.7 or later.",
     -1,
     0},
    {2014,
     EMS_NONE,
     "SLOTLENGTH statement is obsolete in version 5.7 or later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.7 or later.",
     -1,
     0},
    {2015,
     EMS_NONE,
     "MAXADJACENTSLOTSPACING statement is obsolete in version 5.7 or "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.7 or later.",
     -1,
     0},
    {2016,
     EMS_NONE,
     "MAXCOAXIALSLOTSPACING statement is obsolete in version 5.7 or "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.7 or later.",
     -1,
     0},
    {2017,
     EMS_NONE,
     "MAXEDGESLOTSPACING statement is obsolete in version 5.7 or later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.7 or "
     "later.",
     -1,
     0},
    {2018,
     EMS_NONE,
     "SPLITWIREWIDTH statement is obsolete in version 5.7 or later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.7 or later.",
     -1,
     0},
    {2019,
     EMS_NONE,
     "TOPOFSTACKONLY statement is obsolete in version 5.6 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2020,
     EMS_NONE,
     "FOREIGN statement in VIA is obsolete in version 5.6 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2021,
     EMS_NONE,
     "turn-via is obsolete in version 5.6 and later.\n The LEF parser will "
     "ignore this statement.\nTo avoid this warning in the future, remove this "
     "statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2022,
     EMS_NONE,
     "DIRECTION statement in VIARULE is obsolete in version 5.6 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.6 or later.",
     -1,
     0},
    {2023,
     EMS_NONE,
     "OVERHANG statement will be translated into similar ENCLOSURE rule",
     -1,
     0},
    {2024,
     EMS_NONE,
     "METALOVERHANG statement is obsolete in version 5.6 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2025,
     EMS_NONE,
     "SAMENET statement in NONDEFAULTRULE is obsolete in version 5.6 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.6 or later.",
     -1,
     0},
    {2026,
     EMS_NONE,
     "IRDROP statement is obsolete in version 5.4 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2027,
     EMS_NONE,
     "MINFEATURE statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2028,
     EMS_NONE,
     "DIELECTRIC statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2029,
     EMS_NONE,
     "RESISTANCE RPERSQ statement is obsolete in version 5.6 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.6 or "
     "later.",
     -1,
     0},
    {2030,
     EMS_NONE,
     "CAPACITANCE CPERSQDIST statement is obsolete in version 5.6 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.6 or later.",
     -1,
     0},
    {2031,
     EMS_NONE,
     "EDGECAPACITANCE statement is obsolete in version 5.6 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2032,
     EMS_NONE,
     "A SITE statement is defined before SYMMETRY statement.\nTo avoid this "
     "warning in the future, define SITE after SYMMETRY.",
     -1,
     0},
    {2033,
     EMS_NONE,
     "The statement COVER BUMP is a LEF version 5.5 syntax.\nYour LEF file is "
     "version 5.4 or earlier which is incorrect but will be allowed\nbecause "
     "this application does not enforce strict version checking.\nOther tools "
     "that enforce strict checking will have a syntax error when reading this "
     "file.\nYou can change the VERSION statement in this LEF file to 5.5 or "
     "higher to stop this warning.",
     -1,
     0},
    {2034,
     EMS_NONE,
     "The statement BLOCK BLACKBOX is a LEF verion 5.5 syntax.\nYour LEF file "
     "is version 5.4 or earlier which is incorrect but will be "
     "allowed\nbecause this application does not enforce strict version "
     "checking.\nOther tools that enforce strict checking will have a syntax "
     "error when reading this file.\nYou can change the VERSION statement in "
     "this LEF file to 5.5 or higher to stop this warning.",
     -1,
     0},
    {2035,
     EMS_NONE,
     "The statement PAD AREAIO is a LEF verion 5.5 syntax.\nYour LEF file is "
     "version 5.4 or earlier which is incorrect but will be allowed\nbecause "
     "this application does not enforce strict version checking.\nOther tools "
     "that enforce strict checking will have a syntax error when reading this "
     "file.\nYou can change the VERSION statement in this LEF file to 5.5 or "
     "higher to stop this warning.",
     -1,
     0},
    {2036,
     EMS_NONE,
     "SOURCE statement is obsolete in version 5.6 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2037,
     EMS_NONE,
     "SOURCE statement is obsolete in version 5.6 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2038,
     EMS_NONE,
     "MACRO POWER statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2039,
     EMS_NONE,
     "A SITE statement is defined before ORIGIN statement.\nTo avoid this "
     "warning in the future, define SITE after ORIGIN.",
     -1,
     0},
    {2040,
     EMS_NONE,
     "A PIN statement is defined before ORIGIN statement.\nTo avoid this "
     "warning in the future, define PIN after ORIGIN.",
     -1,
     0},
    {2041,
     EMS_NONE,
     "A OBS statement is defined before ORIGIN statement.\nTo avoid this "
     "warning in the future, define OBS after ORIGIN.",
     -1,
     0},
    {2042,
     EMS_NONE,
     "LEQ statement in MACRO is obsolete in version 5.6 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2043,
     EMS_NONE,
     "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.6 or later.",
     -1,
     0},
    {2044,
     EMS_NONE,
     "LEQ statement in MACRO PIN is obsolete in version 5.6 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.6 or "
     "later.",
     -1,
     0},
    {2045,
     EMS_NONE,
     "MACRO POWER statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2046,
     EMS_NONE,
     "MACRO LEAKAGE statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2047,
     EMS_NONE,
     "MACRO RISETHRESH statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2048,
     EMS_NONE,
     "MACRO FALLTHRESH statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2049,
     EMS_NONE,
     "MACRO RISESATCUR statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2050,
     EMS_NONE,
     "MACRO FALLSATCUR statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2051,
     EMS_NONE,
     "MACRO VLO statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2052,
     EMS_NONE,
     "MACRO VHI statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2053,
     EMS_NONE,
     "MACRO TIEOFFR statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2054,
     EMS_NONE,
     "MACRO OUTPUTNOISEMARGIN statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2055,
     EMS_NONE,
     "MACRO OUTPUTRESISTANCE statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2056,
     EMS_NONE,
     "MACRO INPUTNOISEMARGIN statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2057,
     EMS_NONE,
     "MACRO CAPACITANCE statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2058,
     EMS_NONE,
     "MACRO RESISTANCE statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2059,
     EMS_NONE,
     "MACRO PULLDOWNRES statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2060,
     EMS_NONE,
     "MACRO CURRENTSOURCE statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2061,
     EMS_NONE,
     "MACRO CURRENTSOURCE statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2062,
     EMS_NONE,
     "MACRO RISEVOLTAGETHRESHOLD statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2063,
     EMS_NONE,
     "MACRO FALLVOLTAGETHRESHOLD statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2064,
     EMS_NONE,
     "MACRO IV_TABLES statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2065,
     EMS_NONE,
     "Either PATH, RECT or POLYGON statement is a required in MACRO/PIN/PORT.",
     -1,
     0},
    {2066,
     EMS_NONE,
     "MACRO TIMING statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2067,
     EMS_NONE,
     "DEFINE statement is obsolete in version 5.6 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2068,
     EMS_NONE,
     "DEFINES statement is obsolete in version 5.6 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2069,
     EMS_NONE,
     "DEFINEB statement is obsolete in version 5.6 and later.\nThe LEF parser "
     "will ignore this statement.\nTo avoid this warning in the future, remove "
     "this statement from the LEF file with version 5.6 or later.",
     -1,
     0},
    {2070,
     EMS_NONE,
     "UNIVERSALNOISEMARGIN statement is obsolete in version 5.4 and "
     "later.\nThe LEF parser will ignore this statement.\nTo avoid this "
     "warning in the future, remove this statement from the LEF file with "
     "version 5.4 or later.",
     -1,
     0},
    {2071,
     EMS_NONE,
     "EDGERATETHRESHOLD1 statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2072,
     EMS_NONE,
     "EDGERATETHRESHOLD2 statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2073,
     EMS_NONE,
     "EDGERATESCALEFACTOR statement is obsolete in version 5.4 and later.\nThe "
     "LEF parser will ignore this statement.\nTo avoid this warning in the "
     "future, remove this statement from the LEF file with version 5.4 or "
     "later.",
     -1,
     0},
    {2074,
     EMS_NONE,
     "NOISETABLE statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2075,
     EMS_NONE,
     "CORRECTIONTABLE statement is obsolete in version 5.4 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.4 or later.",
     -1,
     0},
    {2076,
     EMS_NONE,
     "Either PATH, RECT or POLYGON statement is required in MACRO/OBS.",
     -1,
     0},
    {2077,
     EMS_NONE,
     "A SPACING SAMENET section is defined but it is not legal in a LEF 5.7 "
     "version file.\nIt will be ignored which will probably cause real DRC "
     "violations to be ignored, and may\ncause false DRC violations to "
     "occur.\n\nTo avoid this warning, and correctly handle these DRC rules, "
     "you should modify your\nLEF to use the appropriate SAMENET keywords as "
     "described in the LEF/DEF 5.7\nmanual under the SPACING statements in the "
     "LAYER (Routing) and LAYER (Cut)\nsections listed in the LEF Table of "
     "Contents.",
     -1,
     0},
    {2078,
     EMS_NONE,
     "It is illegal to have more than one SPACINGTABLE rules within a ROUTING "
     "layer",
     -1,
     0},
    {2079,
     EMS_NONE,
     "CURRENTDEN statement is obsolete in version 5.2 and later.\nThe LEF "
     "parser will ignore this statement.\nTo avoid this warning in the future, "
     "remove this statement from the LEF file with version 5.2 or later.",
     -1,
     0},
    {2080,
     EMS_NONE,
     "The number of cut values in multiple ARRAYSPACING ARRAYCUTS are not in "
     "increasing order.\nTo be consistent with the documentation, update the "
     "cut values to increasing order.",
     -1,
     0},
    {2502, EMS_NONE, "Message %s has been suppressed from output", -1, 0},
    {2503,
     EMS_NONE,
     "Message %s has exceeded the message display limit of %d.",
     -1,
     0},
    {3000, EMS_NONE, "There are still data after the END LIBRARY", -1, 0},
    {4000,
     EMS_NONE,
     "lefwInitCbk was already called, cannot call lefwInit again.\nWriter "
     "Exit.\n",
     -1,
     0},
    {4001,
     EMS_NONE,
     "lefwInit was already called, cannot call lefwInitCbk again.\nWriter "
     "Exit.\n",
     -1,
     0},
    {4002,
     EMS_NONE,
     "lefwInit was already called, cannot call lefwInitCbk again.\nWriter "
     "Exit.\n",
     -1,
     0},
    {4003,
     EMS_NONE,
     "lefwLayerRoutingSpacingUseLengthThreshold cannot be called "
     "if\n\tlefwLayerRoutingSpacingRange has not been called.\n",
     -1,
     0},
    {4004,
     EMS_NONE,
     "lefwLayerRoutingSpacingInfluence cannot be called if\n\tlefRange and "
     "rightRange in lefwLayerRoutingSpacing are both zero.\n",
     -1,
     0},
    {4005,
     EMS_NONE,
     "lefwLayerRoutingSpacingInfluence cannot be called if\n\tlefRange and "
     "rightRange in lefwLayerRoutingSpacing are both zero.",
     -1,
     0},
    {4006,
     EMS_NONE,
     "Need an output file if writing in encrypted format.\n",
     -1,
     0},
    {4100, EMS_NONE, "lefwWrite called before lefwInitCbk.\n", -1, 0},
    {4101,
     EMS_NONE,
     "lefwSetRegisterUnusedCallbacks was not called to setup this data.\n",
     -1,
     0},
    {4500,
     EMS_NONE,
     "Callback for %s is required, but is not defined.\n\n",
     -1,
     0},
    {4700,
     EMS_NONE,
     "LEF items that were present but ignored because of no callbacks were "
     "set.\n",
     -1,
     0},
    {-1, EMS_NONE, "", -1, 0}};

/*
 * End machine generated table.
 */
