###############################################################################
#
# COPYRIGHT 2001-2004 MOTOROLA, ALL RIGHTS RESERVED
#
# Description: Abstract Test Suite 'battleshipstest'
#
###############################################################################
# command line: 'C:\Testing\TAT\bin\atsgen.exe -m @C:/Testing/BSTest/work/macroprc.lst -o C:/Testing/BSTest/work/battleshipstest.tcl -incl types.h model.ifc -cname default -tt -asn1 -state -mf -nia -nic -config C:/Testing/BSTest/config.sic '

set INSTANCE_NAME 0
set INSTANCE_TYPE 1
set INSTANCE_ATTR 2
set INSTANCE_PARAMS 3
set INSTANCE_STYPES 4
set INSTANCE_FIELDS 5
set INSTANCE_PARAMTYPE 6
set INSTANCE_VARARG 7
set INSTANCE_PRIORITY 8
set INSTANCE_RECORD_SIZE 9
set InstanceSet [ list \
 "Simulator" "env" [ list  ] [ list ] [ list ] [ list ] "" 0 100\
 "Strategy" "model" [ list  ] [ list ] [ list ] [ list ] "" 0 100\
 ]
set SIGNAL_NAME 0
set SIGNAL_TYPE 1
set SIGNAL_ATTR 2
set SIGNAL_PARAMS 3
set SIGNAL_STYPES 4
set SIGNAL_FIELDS 5
set SIGNAL_PARAMTYPE 6
set SIGNAL_VARARG 7
set SIGNAL_PRIORITY 8
set SIGNAL_RECORD_SIZE 9
set SignalSet [list \
"DestroyShip"  "in"  [list ] [ list "int" "int" "int" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"FinishSimulation"  "out"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"InitDataComplete"  "in"  [list ] [ list ] [ list ] [ list ] "C" 0 100\
"OrderFireReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderFireRequest"  "out"  [list ] [ list "int" "int" "int" "tStringShotsList" ] [ list -1 -1 -1 10 ] [ list Param1 Param2 Param3 Param4 ] "C" 0 100\
"OrderFireResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderSpeedReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderSpeedRequest"  "out"  [list ] [ list "int" "int" "float" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"OrderSpeedResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderTurnReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderTurnRequest"  "out"  [list ] [ list "int" "int" "int" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"OrderTurnResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"ShipsCurrentState"  "in"  [list ] [ list "int" "tStringShipCurrentState" ] [ list -1 9 ] [ list Param1 Param2 ] "C" 0 100\
"StartSimulation"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"StrategyLose"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"StrategyVictory"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"VisibleShip"  "in"  [list ] [ list "int" "tStringEnemyShip" ] [ list -1 8 ] [ list Param1 Param2 ] "C" 0 100\
"messageError"  "out"  [list ] [ list "SDL_Charstring" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"messageLog"  "out"  [list ] [ list "SDL_Charstring" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"resetStrategy"  "in"  [list ] [ list ] [ list ] [ list ] "C" 0 100\
]
set TestCaseNames [list "Test0001N0" "Test0002N0" "Test0003N0" "Test0004N0" "Test0005N0" "Test0006N0" "Test0007N0" "Test0008N0"]
set DATATYPE_NAME 0
set DATATYPE_TYPE 1
set DATATYPE_DIMENSION 2
set DATATYPE_STYPE 3
set DATATYPE_ATTR 4
set DATATYPE_ENUM 5
set DATATYPE_PARAMTYPE 6
set DATATYPE_DATACLASS 7
set DATATYPE_MEMBERS 8
set DATATYPE_RECORD_SIZE 9
set DataTypeSet [list \
		"tArrayAmountAmmunition" "int" "4" -1 [list ] [ list ] "SDL" "" [list]\
		"tArrayAmountLaunchUnit" "int" "4" -1 [list ] [ list ] "SDL" "" [list]\
		"tArrayShipsCharacter" "tShipCharacter" "5" 6 [list ] [ list ] "SDL" "" [list]\
		"tArrayWeaponryCharacter" "tWeaponryCharacter" "4" 11 [list ] [ list ] "SDL" "" [list]\
		"tCoordinates" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "x" "int" "" -1] [list "y" "int" "" -1]]\
		"tEnemyShip" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "ShipId" "int" "" -1] [list "StrategyId" "int" "" -1] [list "TypeShip" "int" "" -1] [list "Speed" "int" "" -1] [list "Heading" "int" "" -1] [list "Coordinates" "tCoordinates" "" 4]]\
		"tShipCharacter" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "Range" "int" "" -1] [list "MaxSpeed" "int" "" -1] [list "MaxAcceleration" "int" "" -1] [list "MaxResource" "int" "" -1] [list "MaxAmmunition" "tArrayAmountAmmunition" "" 0] [list "MaxLaunchUnit" "tArrayAmountLaunchUnit" "" 1] [list "MaxDeep" "int" "" -1]]\
		"tShipCurrentState" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "ShipId" "int" "" -1] [list "StrategyId" "int" "" -1] [list "TypeShip" "int" "" -1] [list "Speed" "int" "" -1] [list "Heading" "int" "" -1] [list "Resource" "int" "" -1] [list "Coordinates" "tCoordinates" "" 4] [list "Ammunition" "tArrayAmountAmmunition" "" 0]]\
		"tStringEnemyShip" "tEnemyShip" "string" 5 [list ] [ list ] "SDL" "" [list]\
		"tStringShipCurrentState" "tShipCurrentState" "string" 7 [list ] [ list ] "SDL" "" [list]\
		"tStringShotsList" "tCoordinates" "string" 4 [list ] [ list ] "SDL" "" [list]\
		"tWeaponryCharacter" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "Power" "int" "" -1] [list "Range" "int" "" -1] [list "Speed" "int" "" -1]]\
]
set IncludeFiles [ list "types.h" "model.ifc"  ]
set CONFIGURATION ""
set ATS_EVENT_TYPE 0
set ATS_EVENT_TIME 1
set ATS_EVENT_OTIME 2
set ATS_EVENT_PTIME 3
set ATS_EVENT_COND 4
set ATS_EVENT_INST 5
set ATS_EVENT_VERD 6
set ATS_EVENT_SREF 7
set ATS_EVENT_COMMENT 8
set ATS_EVENT_LABEL 9
set ATS_EVENT_DATA 10

StartTestSuite "battleshipstest"


StartTestCase "Test0001N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, NORTH_WEST, 0, SOUTH, 70, (. 100, 70 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderTurnRequest(1,1,0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0001.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test0001N0.mpr" 2 5 14 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "NORTH_WEST" "0" "SOUTH" "70" [list STRUCT "100" "70"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  10 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  4 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 1 0 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  -1 ]\
]

FinishTestCase "Test0001N0"


StartTestCase "Test0002N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 2, EAST, 70, (. 25, 50 .), (: 15, 15, 3, 0 :) .), (. 2, 1, CRUISER, 2, SOUTH_EAST, 70, (. 25, 47 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"OrderTurnRequest(2,1,LEFT)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0002.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test0002N0.mpr" 2 5 16 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "2" "EAST" "70" [list STRUCT "25" "50"] [list ARRAY "15" "15" "3" "0"]] [list STRUCT "2" "1" "CRUISER" "2" "SOUTH_EAST" "70" [list STRUCT "25" "47"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  10 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "LEFT"  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  5 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 1 0 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  -1 ]\
]

FinishTestCase "Test0002N0"


StartTestCase "Test0003N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 2, EAST, 70, (. 40, 85 .), (: 15, 15, 3, 0 :) .), (. 2, 1, CRUISER, 2, EAST, 70, (. 40, 70 .), (: 15, 15, 3, 0 :) .) :))"\
"VisibleShip(1,(: (. 2, 2, DESTROYER, 0, WEST, (. 60, 75 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 80, 75 .) .) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,MISSILE,(: (. 60, 75 .) :))"\
"OrderFireRequest(2,1,MISSILE,(: (. 60, 75 .) :))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0003.mpr" 1 5 20 ]\
[list "C:\\Testing\\BSTest\\work\\Test0003N0.mpr" 2 5 18 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "2" "EAST" "70" [list STRUCT "40" "85"] [list ARRAY "15" "15" "3" "0"]] [list STRUCT "2" "1" "CRUISER" "2" "EAST" "70" [list STRUCT "40" "70"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "2" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "75"]] [list STRUCT "2" "2" "DESTROYER" "0" "WEST" [list STRUCT "80" "75"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "MISSILE"  ] [ list "" [list ARRAY [list STRUCT "60" "75"]]  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 16 ] [list 1 15 ] ] "" "" [list  4 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "MISSILE"  ] [ list "" [list ARRAY [list STRUCT "60" "75"]]  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 19 ] [list 1 17 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  6 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 1 0 0 [list \
[list 6  -1 ]\
]

FinishTestCase "Test0003N0"


StartTestCase "Test0004N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 10, EAST, 70, (. 40, 70 .), (: 0, 0, 3, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 40, 90 .), (: 0, 0, 3, 0 :) .) :))"\
"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 45 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 60, 95 .) .) :))"\
"StartSimulation(0)"\
"OrderTurnRequest(1,1,RIGHT)"\
"OrderSpeedRequest(2,1,1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0004.mpr" 1 5 18 ]\
[list "C:\\Testing\\BSTest\\work\\Test0004N0.mpr" 2 5 18 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "10" "EAST" "70" [list STRUCT "40" "70"] [list ARRAY "0" "0" "3" "0"]] [list STRUCT "2" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "40" "90"] [list ARRAY "0" "0" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "45"]] [list STRUCT "2" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "95"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  10 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "RIGHT"  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  7 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 17 ] [list 1 17 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  6 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 1 0 0 [list \
[list 6  -1 ]\
]

FinishTestCase "Test0004N0"


StartTestCase "Test0005N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 1, EAST, 70, (. 40, 60 .), (: 10, 10, 10, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 45, 60 .), (: 10, 10, 10, 0 :) .), (. 3, 1, CRUISER, 1, EAST, 70, (. 55, 60 .), (: 10, 10, 10, 0 :) .) :))"\
"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 60 .) .) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,MISSILE,(: (. 60, 60 .) :))"\
"OrderFireRequest(2,1,SHELL,(: (. 60, 60 .) :))"\
"OrderFireRequest(3,1,TORPEDO,(: (. 60, 60 .) :))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0005.mpr" 1 5 20 ]\
[list "C:\\Testing\\BSTest\\work\\Test0005N0.mpr" 2 5 20 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "40" "60"] [list ARRAY "10" "10" "10" "0"]] [list STRUCT "2" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "45" "60"] [list ARRAY "10" "10" "10" "0"]] [list STRUCT "3" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "55" "60"] [list ARRAY "10" "10" "10" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "60"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "MISSILE"  ] [ list "" [list ARRAY [list STRUCT "60" "60"]]  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  4 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "SHELL"  ] [ list "" [list ARRAY [list STRUCT "60" "60"]]  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 17 ] [list 1 17 ] ] "" "" [list  4 [ list [ list "" "3"  ] [ list "" "1"  ] [ list "" "TORPEDO"  ] [ list "" [list ARRAY [list STRUCT "60" "60"]]  ]  ]  6 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 7  PASS  [list [list 0 19 ] [list 1 19 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  7 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 1 0 0 [list \
[list 6  7 ]\
]

State 7 0 0 1 0 0 [list \
[list 7  -1 ]\
]

FinishTestCase "Test0005N0"


StartTestCase "Test0006N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 1, EAST, 70, (. 30, 30 .), (: 10, 10, 10, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 75, 30 .), (: 10, 10, 10, 0 :) .), (. 3, 1, CRUISER, 0, WEST, 70, (. 80, 30 .), (: 10, 10, 10, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,-1.0)"\
"OrderSpeedRequest(2,1,-1.0)"\
"OrderTurnRequest(3,1,RIGHT)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0006.mpr" 1 5 18 ]\
[list "C:\\Testing\\BSTest\\work\\Test0006N0.mpr" 2 5 18 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "30" "30"] [list ARRAY "10" "10" "10" "0"]] [list STRUCT "2" "1" "CRUISER" "1" "EAST" "70" [list STRUCT "75" "30"] [list ARRAY "10" "10" "10" "0"]] [list STRUCT "3" "1" "CRUISER" "0" "WEST" "70" [list STRUCT "80" "30"] [list ARRAY "10" "10" "10" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "-1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  7 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "-1.0"  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  10 [ list [ list "" "3"  ] [ list "" "1"  ] [ list "" "RIGHT"  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 17 ] [list 1 17 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  6 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 1 0 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 1 0 0 [list \
[list 6  -1 ]\
]

FinishTestCase "Test0006N0"


StartTestCase "Test0007N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 5, EAST, 70, (. 55, 60 .), (: 0, 0, 0, 0 :) .), (. 2, 1, REPAIR_BOAT, 3, EAST, 70, (. 55, 70 .), (: 0, 0, 0, 10 :) .), (. 3, 1, CRUISER, 5, EAST, 70, (. 55, 80 .), (: 0, 0, 1, 0 :) .) :))"\
"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 60 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 60, 70 .) .), (. 3, 2, DESTROYER, 0, WEST, (. 60, 80 .) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"OrderSpeedRequest(2,1,1.0)"\
"OrderSpeedRequest(3,1,-1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0007.mpr" 1 5 20 ]\
[list "C:\\Testing\\BSTest\\work\\Test0007N0.mpr" 2 5 20 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "5" "EAST" "70" [list STRUCT "55" "60"] [list ARRAY "0" "0" "0" "0"]] [list STRUCT "2" "1" "REPAIR_BOAT" "3" "EAST" "70" [list STRUCT "55" "70"] [list ARRAY "0" "0" "0" "10"]] [list STRUCT "3" "1" "CRUISER" "5" "EAST" "70" [list STRUCT "55" "80"] [list ARRAY "0" "0" "1" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "60"]] [list STRUCT "2" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "70"]] [list STRUCT "3" "2" "DESTROYER" "0" "WEST" [list STRUCT "60" "80"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  7 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 17 ] [list 1 17 ] ] "" "" [list  7 [ list [ list "" "3"  ] [ list "" "1"  ] [ list "" "-1.0"  ]  ]  6 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 7  PASS  [list [list 0 19 ] [list 1 19 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  7 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 1 0 0 [list \
[list 6  7 ]\
]

State 7 0 0 1 0 0 [list \
[list 7  -1 ]\
]

FinishTestCase "Test0007N0"


StartTestCase "Test0008N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 8, EAST, 70, (. 1, 1 .), (: 15, 15, 3, 0 :) .) :))"\
"VisibleShip(1,(: (. 2, 2, REPAIR_BOAT, 0, NORTH_WEST, (. 25, 25 .) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,-1.0000)"\
"FinishSimulation(0,1)"\
"StrategyVictory(1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\Test0008.mpr" 1 5 18 ]\
[list "C:\\Testing\\BSTest\\work\\Test0008N0.mpr" 2 5 18 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
 [list  0  1  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "8" "EAST" "70" [list STRUCT "1" "1"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "2" "2" "REPAIR_BOAT" "0" "NORTH_WEST" [list STRUCT "25" "25"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "-1.0000"  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  1 [ list [ list "" "0"  ] [ list "" "1"  ]  ]  5 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 6  PASS  [list [list 0 17 ] [list 1 17 ] ] "" "" [list  15 [ list [ list "" "1"  ]  ]  6 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  6 ]\
]

State 6 0 0 0 1 0 [list \
[list 6  -1 ]\
]

FinishTestCase "Test0008N0"

EndTestSuite "battleshipstest"
