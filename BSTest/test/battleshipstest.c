#include "battleshipstest.h"

static char * tat_battleshipstest_Test0001N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, NORTH_WEST, 0, SOUTH, 70, (. 100, 70 .), (: 15, 15, 3, 0 :) .) :))",
	"StartSimulation(0)",
	"OrderTurnRequest(1,1,0)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0001N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0001.mpr", 1, 5, 14 },
	{"C:\\Testing\\BSTest\\work\\Test0001N0.mpr", 2, 5, 14 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0001N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0001N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0001N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0001N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0001N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0001N0_N3[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0001N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0001N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0001N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0001N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0001N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0001N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0001N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0001N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0001N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0001N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0001N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0001N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0001N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0001N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0001N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0001N0_2_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0001N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0001N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0001N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0001N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0001N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_OrderTurnRequest tat_battleshipstest_Test0001N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0001N0_3_event = {TAT_RECV_EV, TAT_S_OrderTurnRequest_ID, &tat_battleshipstest_Test0001N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0001N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0001N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0001N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0001N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0001N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0001N0_4_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0001N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0001N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0001N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0001N0_MessageTable[4],
NULL};

tStringShipCurrentState TAT_Ass_Test0001N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=NORTH_WEST;
	TAT_tStringShipCurrentState_Cur->Data.Speed=0;
	TAT_tStringShipCurrentState_Cur->Data.Heading=SOUTH;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=100;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=70;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
static TAT_TEST_RESULT tat_Test0001N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0001N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0001N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0001N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0001N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0001N0_1_event, 1, TAT_Ass_Test0001N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0001N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0001N0_2_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0001N0_2_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0001N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderTurnRequest_ID)&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param3==(0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0001N0_3_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=4;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0001N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0001N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0001N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[5]={
	tat_Test0001N0_state0,tat_Test0001N0_state1,tat_Test0001N0_state2,tat_Test0001N0_state3,tat_Test0001N0_state4};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0002N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 2, EAST, 70, (. 25, 50 .), (: 15, 15, 3, 0 :) .), (. 2, 1, CRUISER, 2, SOUTH_EAST, 70, (. 25, 47 .), (: 15, 15, 3, 0 :) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,1.0)",
	"OrderTurnRequest(2,1,LEFT)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0002N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0002.mpr", 1, 5, 16 },
	{"C:\\Testing\\BSTest\\work\\Test0002N0.mpr", 2, 5, 16 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0002N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0002N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N3[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0002N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0002N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0002N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0002N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_2_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0002N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0002N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_3_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0002N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderTurnRequest tat_battleshipstest_Test0002N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_4_event = {TAT_RECV_EV, TAT_S_OrderTurnRequest_ID, &tat_battleshipstest_Test0002N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0002N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0002N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0002N0_5_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0002N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0002N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0002N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0002N0_MessageTable[5],
NULL};

tStringShipCurrentState TAT_Ass_Test0002N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=2;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=25;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=50;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=2;
	TAT_tStringShipCurrentState_Cur->Data.Heading=SOUTH_EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=25;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=47;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
static TAT_TEST_RESULT tat_Test0002N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0002N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0002N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0002N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0002N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0002N0_1_event, 1, TAT_Ass_Test0002N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0002N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0002N0_2_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0002N0_2_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0002N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0002N0_3_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=4;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0002N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderTurnRequest_ID)&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param3==(LEFT)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0002N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0002N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0002N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0002N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[6]={
	tat_Test0002N0_state0,tat_Test0002N0_state1,tat_Test0002N0_state2,tat_Test0002N0_state3,tat_Test0002N0_state4,
	tat_Test0002N0_state5};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0003N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 2, EAST, 70, (. 40, 85 .), (: 15, 15, 3, 0 :) .), (. 2, 1, CRUISER, 2, EAST, 70, (. 40, 70 .), (: 15, 15, 3, 0 :) .) :))",
	"VisibleShip(1,(: (. 2, 2, DESTROYER, 0, WEST, (. 60, 75 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 80, 75 .) .) :))",
	"StartSimulation(0)",
	"OrderFireRequest(1,1,MISSILE,(: (. 60, 75 .) :))",
	"OrderFireRequest(2,1,MISSILE,(: (. 60, 75 .) :))",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0003N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0003.mpr", 1, 5, 20 },
	{"C:\\Testing\\BSTest\\work\\Test0003N0.mpr", 2, 5, 18 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0003N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0003N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N3[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0003N0_N6[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0003N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0003N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_VisibleShip tat_battleshipstest_Test0003N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_2_event = {TAT_SEND_EV, TAT_S_VisibleShip_ID, &tat_battleshipstest_Test0003N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0003N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_3_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0003N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderFireRequest tat_battleshipstest_Test0003N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_4_event = {TAT_RECV_EV, TAT_S_OrderFireRequest_ID, &tat_battleshipstest_Test0003N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_5_SrcRef[] = {{0, 16}, {1, 15}};
static TAT_SIG_OrderFireRequest tat_battleshipstest_Test0003N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_5_event = {TAT_RECV_EV, TAT_S_OrderFireRequest_ID, &tat_battleshipstest_Test0003N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0003N0_6_SrcRef[] = {{0, 19}, {1, 17}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0003N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0003N0_6_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0003N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0003N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0003N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0003N0_MessageTable[6],
NULL};

tStringShipCurrentState TAT_Ass_Test0003N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=2;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=40;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=85;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=2;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=40;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=70;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
tStringEnemyShip TAT_Ass_Test0003N0_2_1 (TAT_TEST_INSTANCE *id) {
	tStringEnemyShip x;
	x.First=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringEnemyShip_Cur=x.First;
	TAT_tStringEnemyShip_Cur->Suc=NULL;
	TAT_tStringEnemyShip_Cur->Data.ShipId=2;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=75;
	TAT_tStringEnemyShip_Cur->Suc=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	TAT_tStringEnemyShip_Cur=TAT_tStringEnemyShip_Cur->Suc;
	TAT_tStringEnemyShip_Cur->Suc=0;
	x.Last=TAT_tStringEnemyShip_Cur;
	x.Length++;
	TAT_tStringEnemyShip_Cur->Data.ShipId=2;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=80;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=75;
	return x;
}
int TAT_Cmp_Test0003N0_4_3_1 (tStringShotsList x, TAT_TEST_INSTANCE *id) {
	TAT_tStringShotsList_Cur=x.First;
	if(TAT_tStringShotsList_Cur==NULL) return 1;
	if(TAT_tStringShotsList_Cur->Data.x!=60) return 1;
	if(TAT_tStringShotsList_Cur->Data.y!=75) return 1;
	TAT_tStringShotsList_Cur=TAT_tStringShotsList_Cur->Suc;
	if(TAT_tStringShotsList_Cur!=NULL) return 1;
	return 0;
}
int TAT_Cmp_Test0003N0_5_3_1 (tStringShotsList x, TAT_TEST_INSTANCE *id) {
	TAT_tStringShotsList_Cur=x.First;
	if(TAT_tStringShotsList_Cur==NULL) return 1;
	if(TAT_tStringShotsList_Cur->Data.x!=60) return 1;
	if(TAT_tStringShotsList_Cur->Data.y!=75) return 1;
	TAT_tStringShotsList_Cur=TAT_tStringShotsList_Cur->Suc;
	if(TAT_tStringShotsList_Cur!=NULL) return 1;
	return 0;
}
static TAT_TEST_RESULT tat_Test0003N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0003N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0003N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0003N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0003N0_1_event, 1, TAT_Ass_Test0003N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0003N0_2_event, sizeof(__ev));
			if (TAT_Send_VisibleShip(id, &__ev, &tat_battleshipstest_Test0003N0_2_event, 1, TAT_Ass_Test0003N0_2_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0003N0_3_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0003N0_3_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=4;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderFireRequest_ID)&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param3==(MISSILE)))&&
				((TAT_Cmp_Test0003N0_4_3_1(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4,id) == 0))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0003N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				TAT_Free_tStringShotsList(&(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4));
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderFireRequest_ID)&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param3==(MISSILE)))&&
				((TAT_Cmp_Test0003N0_5_3_1(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4,id) == 0))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0003N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				TAT_Free_tStringShotsList(&(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4));
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0003N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0003N0_6_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0003N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[7]={
	tat_Test0003N0_state0,tat_Test0003N0_state1,tat_Test0003N0_state2,tat_Test0003N0_state3,tat_Test0003N0_state4,
	tat_Test0003N0_state5,tat_Test0003N0_state6};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0004N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 10, EAST, 70, (. 40, 70 .), (: 0, 0, 3, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 40, 90 .), (: 0, 0, 3, 0 :) .) :))",
	"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 45 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 60, 95 .) .) :))",
	"StartSimulation(0)",
	"OrderTurnRequest(1,1,RIGHT)",
	"OrderSpeedRequest(2,1,1.0)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0004N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0004.mpr", 1, 5, 18 },
	{"C:\\Testing\\BSTest\\work\\Test0004N0.mpr", 2, 5, 18 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0004N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0004N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N3[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0004N0_N6[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0004N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0004N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_VisibleShip tat_battleshipstest_Test0004N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_2_event = {TAT_SEND_EV, TAT_S_VisibleShip_ID, &tat_battleshipstest_Test0004N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0004N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_3_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0004N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderTurnRequest tat_battleshipstest_Test0004N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_4_event = {TAT_RECV_EV, TAT_S_OrderTurnRequest_ID, &tat_battleshipstest_Test0004N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0004N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_5_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0004N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0004N0_6_SrcRef[] = {{0, 17}, {1, 17}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0004N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0004N0_6_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0004N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0004N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0004N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0004N0_MessageTable[6],
NULL};

tStringShipCurrentState TAT_Ass_Test0004N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=10;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=40;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=70;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=40;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=90;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
tStringEnemyShip TAT_Ass_Test0004N0_2_1 (TAT_TEST_INSTANCE *id) {
	tStringEnemyShip x;
	x.First=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringEnemyShip_Cur=x.First;
	TAT_tStringEnemyShip_Cur->Suc=NULL;
	TAT_tStringEnemyShip_Cur->Data.ShipId=1;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=45;
	TAT_tStringEnemyShip_Cur->Suc=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	TAT_tStringEnemyShip_Cur=TAT_tStringEnemyShip_Cur->Suc;
	TAT_tStringEnemyShip_Cur->Suc=0;
	x.Last=TAT_tStringEnemyShip_Cur;
	x.Length++;
	TAT_tStringEnemyShip_Cur->Data.ShipId=2;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=95;
	return x;
}
static TAT_TEST_RESULT tat_Test0004N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0004N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0004N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0004N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0004N0_1_event, 1, TAT_Ass_Test0004N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0004N0_2_event, sizeof(__ev));
			if (TAT_Send_VisibleShip(id, &__ev, &tat_battleshipstest_Test0004N0_2_event, 1, TAT_Ass_Test0004N0_2_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0004N0_3_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0004N0_3_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=4;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderTurnRequest_ID)&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param3==(RIGHT)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0004N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0004N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0004N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0004N0_6_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0004N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[7]={
	tat_Test0004N0_state0,tat_Test0004N0_state1,tat_Test0004N0_state2,tat_Test0004N0_state3,tat_Test0004N0_state4,
	tat_Test0004N0_state5,tat_Test0004N0_state6};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0005N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 1, EAST, 70, (. 40, 60 .), (: 10, 10, 10, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 45, 60 .), (: 10, 10, 10, 0 :) .), (. 3, 1, CRUISER, 1, EAST, 70, (. 55, 60 .), (: 10, 10, 10, 0 :) .) :))",
	"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 60 .) .) :))",
	"StartSimulation(0)",
	"OrderFireRequest(1,1,MISSILE,(: (. 60, 60 .) :))",
	"OrderFireRequest(2,1,SHELL,(: (. 60, 60 .) :))",
	"OrderFireRequest(3,1,TORPEDO,(: (. 60, 60 .) :))",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0005N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0005.mpr", 1, 5, 20 },
	{"C:\\Testing\\BSTest\\work\\Test0005N0.mpr", 2, 5, 20 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0005N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0005N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N3[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N6[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0005N0_N7[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0005N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0005N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_VisibleShip tat_battleshipstest_Test0005N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_2_event = {TAT_SEND_EV, TAT_S_VisibleShip_ID, &tat_battleshipstest_Test0005N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0005N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_3_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0005N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderFireRequest tat_battleshipstest_Test0005N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_4_event = {TAT_RECV_EV, TAT_S_OrderFireRequest_ID, &tat_battleshipstest_Test0005N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_OrderFireRequest tat_battleshipstest_Test0005N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_5_event = {TAT_RECV_EV, TAT_S_OrderFireRequest_ID, &tat_battleshipstest_Test0005N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_6_SrcRef[] = {{0, 17}, {1, 17}};
static TAT_SIG_OrderFireRequest tat_battleshipstest_Test0005N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_6_event = {TAT_RECV_EV, TAT_S_OrderFireRequest_ID, &tat_battleshipstest_Test0005N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[6],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0005N0_7_SrcRef[] = {{0, 19}, {1, 19}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0005N0_7_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0005N0_7_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0005N0_7_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0005N0_N7, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0005N0_7_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0005N0_MessageTable[7],
NULL};

tStringShipCurrentState TAT_Ass_Test0005N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=40;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=60;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=45;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=60;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=3;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=55;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=60;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
tStringEnemyShip TAT_Ass_Test0005N0_2_1 (TAT_TEST_INSTANCE *id) {
	tStringEnemyShip x;
	x.First=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringEnemyShip_Cur=x.First;
	TAT_tStringEnemyShip_Cur->Suc=NULL;
	TAT_tStringEnemyShip_Cur->Data.ShipId=1;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=60;
	return x;
}
int TAT_Cmp_Test0005N0_4_3_1 (tStringShotsList x, TAT_TEST_INSTANCE *id) {
	TAT_tStringShotsList_Cur=x.First;
	if(TAT_tStringShotsList_Cur==NULL) return 1;
	if(TAT_tStringShotsList_Cur->Data.x!=60) return 1;
	if(TAT_tStringShotsList_Cur->Data.y!=60) return 1;
	TAT_tStringShotsList_Cur=TAT_tStringShotsList_Cur->Suc;
	if(TAT_tStringShotsList_Cur!=NULL) return 1;
	return 0;
}
int TAT_Cmp_Test0005N0_5_3_1 (tStringShotsList x, TAT_TEST_INSTANCE *id) {
	TAT_tStringShotsList_Cur=x.First;
	if(TAT_tStringShotsList_Cur==NULL) return 1;
	if(TAT_tStringShotsList_Cur->Data.x!=60) return 1;
	if(TAT_tStringShotsList_Cur->Data.y!=60) return 1;
	TAT_tStringShotsList_Cur=TAT_tStringShotsList_Cur->Suc;
	if(TAT_tStringShotsList_Cur!=NULL) return 1;
	return 0;
}
int TAT_Cmp_Test0005N0_6_3_1 (tStringShotsList x, TAT_TEST_INSTANCE *id) {
	TAT_tStringShotsList_Cur=x.First;
	if(TAT_tStringShotsList_Cur==NULL) return 1;
	if(TAT_tStringShotsList_Cur->Data.x!=60) return 1;
	if(TAT_tStringShotsList_Cur->Data.y!=60) return 1;
	TAT_tStringShotsList_Cur=TAT_tStringShotsList_Cur->Suc;
	if(TAT_tStringShotsList_Cur!=NULL) return 1;
	return 0;
}
static TAT_TEST_RESULT tat_Test0005N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0005N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0005N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0005N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0005N0_1_event, 1, TAT_Ass_Test0005N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0005N0_2_event, sizeof(__ev));
			if (TAT_Send_VisibleShip(id, &__ev, &tat_battleshipstest_Test0005N0_2_event, 1, TAT_Ass_Test0005N0_2_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0005N0_3_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0005N0_3_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=4;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderFireRequest_ID)&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param3==(MISSILE)))&&
				((TAT_Cmp_Test0005N0_4_3_1(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4,id) == 0))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0005N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				TAT_Free_tStringShotsList(&(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4));
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderFireRequest_ID)&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param3==(SHELL)))&&
				((TAT_Cmp_Test0005N0_5_3_1(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4,id) == 0))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0005N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				TAT_Free_tStringShotsList(&(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4));
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderFireRequest_ID)&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param1==(3)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param3==(TORPEDO)))&&
				((TAT_Cmp_Test0005N0_6_3_1(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4,id) == 0))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0005N0_6_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				TAT_Free_tStringShotsList(&(((TAT_SIG_OrderFireRequest *)_ev->eventData)->Param4));
				id->popQueue(id);
				id->nextState=7;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0005N0_state7(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0005N0_7_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0005N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[8]={
	tat_Test0005N0_state0,tat_Test0005N0_state1,tat_Test0005N0_state2,tat_Test0005N0_state3,tat_Test0005N0_state4,
	tat_Test0005N0_state5,tat_Test0005N0_state6,tat_Test0005N0_state7};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0006N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 1, EAST, 70, (. 30, 30 .), (: 10, 10, 10, 0 :) .), (. 2, 1, CRUISER, 1, EAST, 70, (. 75, 30 .), (: 10, 10, 10, 0 :) .), (. 3, 1, CRUISER, 0, WEST, 70, (. 80, 30 .), (: 10, 10, 10, 0 :) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,-1.0)",
	"OrderSpeedRequest(2,1,-1.0)",
	"OrderTurnRequest(3,1,RIGHT)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0006N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0006.mpr", 1, 5, 18 },
	{"C:\\Testing\\BSTest\\work\\Test0006N0.mpr", 2, 5, 18 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0006N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0006N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N3[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0006N0_N6[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0006N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0006N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0006N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_2_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0006N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0006N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_3_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0006N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0006N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_4_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0006N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_OrderTurnRequest tat_battleshipstest_Test0006N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_5_event = {TAT_RECV_EV, TAT_S_OrderTurnRequest_ID, &tat_battleshipstest_Test0006N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0006N0_6_SrcRef[] = {{0, 17}, {1, 17}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0006N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0006N0_6_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0006N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0006N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0006N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0006N0_MessageTable[6],
NULL};

tStringShipCurrentState TAT_Ass_Test0006N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=30;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=30;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=1;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=75;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=30;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=3;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=0;
	TAT_tStringShipCurrentState_Cur->Data.Heading=WEST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=80;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=30;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=10;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
static TAT_TEST_RESULT tat_Test0006N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0006N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0006N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0006N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0006N0_1_event, 1, TAT_Ass_Test0006N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0006N0_2_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0006N0_2_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(-1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0006N0_3_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=4;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(-1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0006N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderTurnRequest_ID)&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param1==(3)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderTurnRequest *)_ev->eventData)->Param3==(RIGHT)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0006N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0006N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0006N0_6_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0006N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[7]={
	tat_Test0006N0_state0,tat_Test0006N0_state1,tat_Test0006N0_state2,tat_Test0006N0_state3,tat_Test0006N0_state4,
	tat_Test0006N0_state5,tat_Test0006N0_state6};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0007N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 5, EAST, 70, (. 55, 60 .), (: 0, 0, 0, 0 :) .), (. 2, 1, REPAIR_BOAT, 3, EAST, 70, (. 55, 70 .), (: 0, 0, 0, 10 :) .), (. 3, 1, CRUISER, 5, EAST, 70, (. 55, 80 .), (: 0, 0, 1, 0 :) .) :))",
	"VisibleShip(1,(: (. 1, 2, DESTROYER, 0, WEST, (. 60, 60 .) .), (. 2, 2, DESTROYER, 0, WEST, (. 60, 70 .) .), (. 3, 2, DESTROYER, 0, WEST, (. 60, 80 .) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,1.0)",
	"OrderSpeedRequest(2,1,1.0)",
	"OrderSpeedRequest(3,1,-1.0)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0007N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0007.mpr", 1, 5, 20 },
	{"C:\\Testing\\BSTest\\work\\Test0007N0.mpr", 2, 5, 20 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0007N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0007N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N3[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N6[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0007N0_N7[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0007N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0007N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_VisibleShip tat_battleshipstest_Test0007N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_2_event = {TAT_SEND_EV, TAT_S_VisibleShip_ID, &tat_battleshipstest_Test0007N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0007N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_3_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0007N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0007N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_4_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0007N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0007N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_5_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0007N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_6_SrcRef[] = {{0, 17}, {1, 17}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0007N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_6_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0007N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[6],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0007N0_7_SrcRef[] = {{0, 19}, {1, 19}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0007N0_7_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0007N0_7_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0007N0_7_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0007N0_N7, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0007N0_7_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0007N0_MessageTable[7],
NULL};

tStringShipCurrentState TAT_Ass_Test0007N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=5;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=55;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=60;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=2;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=REPAIR_BOAT;
	TAT_tStringShipCurrentState_Cur->Data.Speed=3;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=55;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=70;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=10;
	TAT_tStringShipCurrentState_Cur->Suc=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	TAT_tStringShipCurrentState_Cur=TAT_tStringShipCurrentState_Cur->Suc;
	TAT_tStringShipCurrentState_Cur->Suc=0;
	x.Last=TAT_tStringShipCurrentState_Cur;
	x.Length++;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=3;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=5;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=55;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=80;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=0;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=1;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
tStringEnemyShip TAT_Ass_Test0007N0_2_1 (TAT_TEST_INSTANCE *id) {
	tStringEnemyShip x;
	x.First=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringEnemyShip_Cur=x.First;
	TAT_tStringEnemyShip_Cur->Suc=NULL;
	TAT_tStringEnemyShip_Cur->Data.ShipId=1;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=60;
	TAT_tStringEnemyShip_Cur->Suc=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	TAT_tStringEnemyShip_Cur=TAT_tStringEnemyShip_Cur->Suc;
	TAT_tStringEnemyShip_Cur->Suc=0;
	x.Last=TAT_tStringEnemyShip_Cur;
	x.Length++;
	TAT_tStringEnemyShip_Cur->Data.ShipId=2;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=70;
	TAT_tStringEnemyShip_Cur->Suc=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	TAT_tStringEnemyShip_Cur=TAT_tStringEnemyShip_Cur->Suc;
	TAT_tStringEnemyShip_Cur->Suc=0;
	x.Last=TAT_tStringEnemyShip_Cur;
	x.Length++;
	TAT_tStringEnemyShip_Cur->Data.ShipId=3;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=DESTROYER;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=60;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=80;
	return x;
}
static TAT_TEST_RESULT tat_Test0007N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0007N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0007N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0007N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0007N0_1_event, 1, TAT_Ass_Test0007N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0007N0_2_event, sizeof(__ev));
			if (TAT_Send_VisibleShip(id, &__ev, &tat_battleshipstest_Test0007N0_2_event, 1, TAT_Ass_Test0007N0_2_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0007N0_3_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0007N0_3_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=4;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0007N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(2)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0007N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(3)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(-1.0)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0007N0_6_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=7;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0007N0_state7(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0007N0_7_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0007N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[8]={
	tat_Test0007N0_state0,tat_Test0007N0_state1,tat_Test0007N0_state2,tat_Test0007N0_state3,tat_Test0007N0_state4,
	tat_Test0007N0_state5,tat_Test0007N0_state6,tat_Test0007N0_state7};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
static char * tat_battleshipstest_Test0008N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 8, EAST, 70, (. 1, 1 .), (: 15, 15, 3, 0 :) .) :))",
	"VisibleShip(1,(: (. 2, 2, REPAIR_BOAT, 0, NORTH_WEST, (. 25, 25 .) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,-1.0000)",
	"FinishSimulation(0,1)",
	"StrategyVictory(1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test0008N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\mpr\\Test0008.mpr", 1, 5, 18 },
	{"C:\\Testing\\BSTest\\work\\Test0008N0.mpr", 2, 5, 18 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test0008N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test0008N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N3[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N5[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test0008N0_N6[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test0008N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test0008N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_VisibleShip tat_battleshipstest_Test0008N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_2_event = {TAT_SEND_EV, TAT_S_VisibleShip_ID, &tat_battleshipstest_Test0008N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test0008N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_3_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test0008N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test0008N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_4_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test0008N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[4],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_5_SrcRef[] = {{0, 15}, {1, 15}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test0008N0_5_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_5_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test0008N0_5_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N5, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_5_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[5],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test0008N0_6_SrcRef[] = {{0, 17}, {1, 17}};
static TAT_SIG_StrategyVictory tat_battleshipstest_Test0008N0_6_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test0008N0_6_event = {TAT_SEND_EV, TAT_S_StrategyVictory_ID, &tat_battleshipstest_Test0008N0_6_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test0008N0_N6, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test0008N0_6_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test0008N0_MessageTable[6],
NULL};

tStringShipCurrentState TAT_Ass_Test0008N0_1_1 (TAT_TEST_INSTANCE *id) {
	tStringShipCurrentState x;
	x.First=(tStringShipCurrentState_yrec*)malloc(sizeof(tStringShipCurrentState_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringShipCurrentState_Cur=x.First;
	TAT_tStringShipCurrentState_Cur->Suc=NULL;
	TAT_tStringShipCurrentState_Cur->Data.ShipId=1;
	TAT_tStringShipCurrentState_Cur->Data.StrategyId=1;
	TAT_tStringShipCurrentState_Cur->Data.TypeShip=CRUISER;
	TAT_tStringShipCurrentState_Cur->Data.Speed=8;
	TAT_tStringShipCurrentState_Cur->Data.Heading=EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=1;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=1;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
tStringEnemyShip TAT_Ass_Test0008N0_2_1 (TAT_TEST_INSTANCE *id) {
	tStringEnemyShip x;
	x.First=(tStringEnemyShip_yrec*)malloc(sizeof(tStringEnemyShip_yrec));
	x.Last=x.First;
	x.Length=1;
	x.IsAssigned=1;
	TAT_tStringEnemyShip_Cur=x.First;
	TAT_tStringEnemyShip_Cur->Suc=NULL;
	TAT_tStringEnemyShip_Cur->Data.ShipId=2;
	TAT_tStringEnemyShip_Cur->Data.StrategyId=2;
	TAT_tStringEnemyShip_Cur->Data.TypeShip=REPAIR_BOAT;
	TAT_tStringEnemyShip_Cur->Data.Speed=0;
	TAT_tStringEnemyShip_Cur->Data.Heading=NORTH_WEST;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.x=25;
	TAT_tStringEnemyShip_Cur->Data.Coordinates.y=25;
	return x;
}
static TAT_TEST_RESULT tat_Test0008N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0008N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test0008N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0008N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test0008N0_1_event, 1, TAT_Ass_Test0008N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0008N0_2_event, sizeof(__ev));
			if (TAT_Send_VisibleShip(id, &__ev, &tat_battleshipstest_Test0008N0_2_event, 1, TAT_Ass_Test0008N0_2_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state3(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0008N0_3_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test0008N0_3_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=4;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_OrderSpeedRequest_ID)&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param1==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param2==(1)))&&
				((((TAT_SIG_OrderSpeedRequest *)_ev->eventData)->Param3==(-1.0000)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0008N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=5;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state5(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test0008N0_5_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=6;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test0008N0_state6(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test0008N0_6_event, sizeof(__ev));
			if (TAT_Send_StrategyVictory(id, &__ev, &tat_battleshipstest_Test0008N0_6_event, 1)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=-1;
		}
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test0008N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[7]={
	tat_Test0008N0_state0,tat_Test0008N0_state1,tat_Test0008N0_state2,tat_Test0008N0_state3,tat_Test0008N0_state4,
	tat_Test0008N0_state5,tat_Test0008N0_state6};
	TAT_TEST_RESULT res;
	int prevState;
	if( id == NULL )
	{
		id->testStatus = TAT_ERR_INTERNAL;
		id->testResult = TAT_TEST_CRITICAL;
		id->dumpEvent(id, NULL, NULL);
		return TAT_TEST_CRITICAL;
	}
	while( id->nextState != TAT_FINAL_STATE )
	{
		prevState=id->nextState;
		res = states[id->nextState](id);
		if (res == TAT_TEST_CRITICAL) return TAT_TEST_CRITICAL;
		if (res == TAT_TEST_FINISHED && id->testStatus != TAT_OK)
			return TAT_TEST_FINISHED;
		if (res == TAT_TEST_FINISHED && id->nextState != TAT_FINAL_STATE && id->nextState==prevState)
			return TAT_TEST_CONTINUE;
	}
	return TAT_TEST_FINISHED;
}


/****************************************************************************/
