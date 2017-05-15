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
set TestCaseNames [list "Test1_1N0" "Test1_2N0" "Test1_3N0" "Test1_4N0" "Test1_6N0" "Test2_1N0" "Test2_3N0" "Test2_4N0" "Test2_4AdditionalN0" "Test2_5N0" "Test3_1N0" "Test3_3N0" "Test3_6N0"]
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


StartTestCase "Test1_1N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, WEST, 70, (. 25, 35.), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderTurnRequest(1,1,LEFT)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test1_1.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test1_1N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "WEST" "70" [list STRUCT "25" "35"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  10 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "LEFT"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test1_1N0"


StartTestCase "Test1_2N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, SOUTH, 70, (. 25, 40 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test1_2.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test1_2N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "SOUTH" "70" [list STRUCT "25" "40"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test1_2N0"


StartTestCase "Test1_3N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH_EAST, 70, (. 25, 25 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderTurnRequest(1,1,LEFT)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test1_3.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test1_3N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH_EAST" "70" [list STRUCT "25" "25"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  10 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "LEFT"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test1_3N0"


StartTestCase "Test1_4N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH, 70, (. 25, 25 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test1_4.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test1_4N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH" "70" [list STRUCT "25" "25"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test1_4N0"


StartTestCase "Test1_6N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, DESTROYER, 0, NORTH, 70, (. 25, 55 .), (: 15, 15, 3, 0 :) .), (. 2, 1, MISSILE_CUTTER, 0, SOUTH_EAST, 70, (. 30, 55 .), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"OrderSpeedRequest(2,1,1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test1_6.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test1_6N0.mpr" 2 5 16 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "DESTROYER" "0" "NORTH" "70" [list STRUCT "25" "55"] [list ARRAY "15" "15" "3" "0"]] [list STRUCT "2" "1" "MISSILE_CUTTER" "0" "SOUTH_EAST" "70" [list STRUCT "30" "55"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  7 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  4 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test1_6N0"


StartTestCase "Test2_1N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH, 70, (. 50, 50 .), (: 15, 15, 3, 0 :) .):))"\
"VisibleShip(1,(: (. 1, 2, REPAIR_BOAT, 0, SOUTH, (. 50, 60 .).),(. 2, 2, CRUISER, 0, SOUTH, (. 56, 60 .).) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,0,(: (. 50, 60 .) :))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test2_1.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test2_1N0.mpr" 2 5 16 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH" "70" [list STRUCT "50" "50"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "REPAIR_BOAT" "0" "SOUTH" [list STRUCT "50" "60"]] [list STRUCT "2" "2" "CRUISER" "0" "SOUTH" [list STRUCT "56" "60"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ] [ list "" [list ARRAY [list STRUCT "50" "60"]]  ]  ]  4 [ list REL "0" "0" ] ] ]\
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

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  -1 ]\
]

FinishTestCase "Test2_1N0"


StartTestCase "Test2_3N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH, 70, (. 50, 50 .), (: 15, 15, 3, 0 :) .):))"\
"VisibleShip(1,(: (. 1, 2, CRUISER, 0, SOUTH, (. 50, 60 .).),(. 2, 2, CRUISER, 0, SOUTH, (. 56, 67 .).) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,0,(: (. 50, 60 .) :))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test2_3.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test2_3N0.mpr" 2 5 16 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH" "70" [list STRUCT "50" "50"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "CRUISER" "0" "SOUTH" [list STRUCT "50" "60"]] [list STRUCT "2" "2" "CRUISER" "0" "SOUTH" [list STRUCT "56" "67"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ] [ list "" [list ARRAY [list STRUCT "50" "60"]]  ]  ]  4 [ list REL "0" "0" ] ] ]\
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

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  -1 ]\
]

FinishTestCase "Test2_3N0"


StartTestCase "Test2_4N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, DESTROYER, 0, SOUTH_WEST, 20, (. 180, 60 .), (: 15, 15, 3, 0 :) .), (. 2, 1, REPAIR_BOAT, 0, SOUTH, 70, (. 180, 65 .), (: 15, 15, 3, 2 :) .) :))"\
"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, SOUTH_WEST,(. 180, 50 .).) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,0,(: :))"\
"OrderFireRequest(2,1,3,(: (. 180, 60 .):))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test2_4.mpr" 1 5 18 ]\
[list "C:\\Testing\\BSTest\\work\\Test2_4N0.mpr" 2 5 18 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "DESTROYER" "0" "SOUTH_WEST" "20" [list STRUCT "180" "60"] [list ARRAY "15" "15" "3" "0"]] [list STRUCT "2" "1" "REPAIR_BOAT" "0" "SOUTH" "70" [list STRUCT "180" "65"] [list ARRAY "15" "15" "3" "2"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "DESTROYER" "0" "SOUTH_WEST" [list STRUCT "180" "50"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ] [ list "" [list ARRAY ]  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  4 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "3"  ] [ list "" [list ARRAY [list STRUCT "180" "60"]]  ]  ]  5 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test2_4N0"


StartTestCase "Test2_4AdditionalN0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, DESTROYER, 2, SOUTH_WEST, 20, (. 180, 60 .), (: 15, 15, 3, 0 :) .), (. 2, 1, REPAIR_BOAT, 0, SOUTH, 70, (. 180, 65 .), (: 15, 15, 3, 2 :) .) :))"\
"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, SOUTH_WEST,(. 180, 50 .).) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,0,(: :))"\
"OrderFireRequest(2,1,3,(: (. 180, 60 .):))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test2_4Additional.mpr" 1 5 18 ]\
[list "C:\\Testing\\BSTest\\work\\Test2_4AdditionalN0.mpr" 2 5 18 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "DESTROYER" "2" "SOUTH_WEST" "20" [list STRUCT "180" "60"] [list ARRAY "15" "15" "3" "0"]] [list STRUCT "2" "1" "REPAIR_BOAT" "0" "SOUTH" "70" [list STRUCT "180" "65"] [list ARRAY "15" "15" "3" "2"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "DESTROYER" "0" "SOUTH_WEST" [list STRUCT "180" "50"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ] [ list "" [list ARRAY ]  ]  ]  4 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 5  PASS  [list [list 0 15 ] [list 1 15 ] ] "" "" [list  4 [ list [ list "" "2"  ] [ list "" "1"  ] [ list "" "3"  ] [ list "" [list ARRAY [list STRUCT "180" "60"]]  ]  ]  5 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test2_4AdditionalN0"


StartTestCase "Test2_5N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH, 70, (. 50, 50 .), (: 15, 15, 3, 0 :) .):))"\
"VisibleShip(1,(: (. 1, 2, CRUISER, 0, SOUTH, (. 50, 60 .).) :))"\
"StartSimulation(0)"\
"OrderFireRequest(1,1,0,(:(. 50, 60 .) :))"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test2_5.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test2_5N0.mpr" 2 5 16 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH" "70" [list STRUCT "50" "50"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "CRUISER" "0" "SOUTH" [list STRUCT "50" "60"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  4 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "0"  ] [ list "" [list ARRAY [list STRUCT "50" "60"]]  ]  ]  4 [ list REL "0" "0" ] ] ]\
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

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  -1 ]\
]

FinishTestCase "Test2_5N0"


StartTestCase "Test3_1N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, WEST, 70, (. 2, 98.), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderTurnRequest(1,1,LEFT)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test3_1.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test3_1N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "WEST" "70" [list STRUCT "2" "98"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  10 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "LEFT"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test3_1N0"


StartTestCase "Test3_3N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, NORTH, 70, (. 50, 50 .), (: 0, 0, 0, 0 :) .):))"\
"VisibleShip(1,(: (. 1, 2, REPAIR_BOAT, 0, SOUTH, (. 50, 60 .).),(. 2, 2, CRUISER, 0, SOUTH, (. 50, 75 .).) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test3_3.mpr" 1 5 16 ]\
[list "C:\\Testing\\BSTest\\work\\Test3_3N0.mpr" 2 5 16 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "0" "NORTH" "70" [list STRUCT "50" "50"] [list ARRAY "0" "0" "0" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "2" "REPAIR_BOAT" "0" "SOUTH" [list STRUCT "50" "60"]] [list STRUCT "2" "2" "CRUISER" "0" "SOUTH" [list STRUCT "50" "75"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 13 ] [list 1 13 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "1.0"  ]  ]  4 [ list REL "0" "0" ] ] ]\
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

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  5 ]\
]

State 5 0 0 1 0 0 [list \
[list 5  -1 ]\
]

FinishTestCase "Test3_3N0"


StartTestCase "Test3_6N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 2, NORTH, 70, (. 5, 37.), (: 15, 15, 3, 0 :) .) :))"\
"StartSimulation(0)"\
"OrderSpeedRequest(1,1,-1.0)"\
"FinishSimulation(0,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\PTESTS\\Test3_6.mpr" 1 5 14 ]\
[list "C:\\Testing\\BSTest\\work\\Test3_6N0.mpr" 2 5 14 ]\
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
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "CRUISER" "2" "NORTH" "70" [list STRUCT "5" "37"] [list ARRAY "15" "15" "3" "0"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 9 ] [list 1 9 ] ] "" "" [list  13 [ list [ list "" "0"  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 11 ] [list 1 11 ] ] "" "" [list  7 [ list [ list "" "1"  ] [ list "" "1"  ] [ list "" "-1.0"  ]  ]  3 [ list REL "0" "0" ] ] ]\
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

FinishTestCase "Test3_6N0"

EndTestSuite "battleshipstest"
