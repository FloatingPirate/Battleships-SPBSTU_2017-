#include "battleshipstest.h"

static char * tat_battleshipstest_Test11N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, SOUTH_EAST, 70, (. 25, 75 .), (: 15, 15, 3, 0 :) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,1.0)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test11N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\PTESTS\\Test11.mpr", 1, 5, 14 },
	{"C:\\Testing\\BSTest\\work\\Test11N0.mpr", 2, 5, 14 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test11N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test11N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test11N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test11N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test11N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test11N0_N3[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test11N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test11N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test11N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test11N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test11N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test11N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test11N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test11N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test11N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test11N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test11N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test11N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test11N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test11N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test11N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test11N0_2_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test11N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test11N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test11N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test11N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test11N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test11N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test11N0_3_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test11N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test11N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test11N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test11N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test11N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test11N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test11N0_4_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test11N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test11N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test11N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test11N0_MessageTable[4],
NULL};

tStringShipCurrentState TAT_Ass_Test11N0_1_1 (TAT_TEST_INSTANCE *id) {
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
	TAT_tStringShipCurrentState_Cur->Data.Speed=0;
	TAT_tStringShipCurrentState_Cur->Data.Heading=SOUTH_EAST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=25;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=75;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
static TAT_TEST_RESULT tat_Test11N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test11N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test11N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test11N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test11N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test11N0_1_event, 1, TAT_Ass_Test11N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test11N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test11N0_2_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test11N0_2_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test11N0_state3(TAT_TEST_INSTANCE *id)
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
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test11N0_3_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=4;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test11N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test11N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test11N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[5]={
	tat_Test11N0_state0,tat_Test11N0_state1,tat_Test11N0_state2,tat_Test11N0_state3,tat_Test11N0_state4};
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
static char * tat_battleshipstest_Test12N0_MessageTable[] = {
	"InitDataComplete()",
	"ShipsCurrentState(1,(: (. 1, 1, CRUISER, 0, SOUTH_WEST, 70, (. 180, 75 .), (: 15, 15, 3, 0 :) .) :))",
	"StartSimulation(0)",
	"OrderSpeedRequest(1,1,1.0)",
	"FinishSimulation(0,1)"
};
static TAT_SRC_FILE_DEF tat_battleshipstest_Test12N0_SrcFiles[] = {
	{"C:\\Testing\\BSTest\\PTESTS\\Test12.mpr", 1, 5, 14 },
	{"C:\\Testing\\BSTest\\work\\Test12N0.mpr", 2, 5, 14 }};
TAT_TEST_RESULT TAT_TI_battleshipstest_Test12N0( TAT_TEST_INSTANCE* id )
{
	id->varDefs = NULL;
	id->timeLabels = NULL;
	id->srcFiles = (TAT_SRC_FILE_DEF*)&tat_battleshipstest_Test12N0_SrcFiles;
	id->timeLabelCount = 0;
	id->srcFilesCount = 2;
	id->varCount = 0;
	id->branchCount = 0;
	id->repeatCount = 1;
	id->timerCount  = 0;
	id->loopCount   = 0;
	return TAT_TEST_CONTINUE;
}
static TAT_INSTANCE_ID tat_I_battleshipstest_Test12N0_N0[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test12N0_N1[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test12N0_N2[]={TAT_I_Simulator_ID,TAT_I_Strategy_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test12N0_N3[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_INSTANCE_ID tat_I_battleshipstest_Test12N0_N4[]={TAT_I_Strategy_ID,TAT_I_Simulator_ID};
static TAT_SRC_REF_STRUCT tat_battleshipstest_Test12N0_0_SrcRef[] = {{0, 5}, {1, 5}};
static TAT_EVENT_INSTANCE tat_battleshipstest_Test12N0_0_event = {TAT_SEND_EV, TAT_S_InitDataComplete_ID, NULL, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test12N0_N0, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test12N0_0_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test12N0_MessageTable[0],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test12N0_1_SrcRef[] = {{0, 7}, {1, 7}};
static TAT_SIG_ShipsCurrentState tat_battleshipstest_Test12N0_1_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test12N0_1_event = {TAT_SEND_EV, TAT_S_ShipsCurrentState_ID, &tat_battleshipstest_Test12N0_1_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test12N0_N1, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test12N0_1_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test12N0_MessageTable[1],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test12N0_2_SrcRef[] = {{0, 9}, {1, 9}};
static TAT_SIG_StartSimulation tat_battleshipstest_Test12N0_2_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test12N0_2_event = {TAT_SEND_EV, TAT_S_StartSimulation_ID, &tat_battleshipstest_Test12N0_2_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test12N0_N2, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test12N0_2_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test12N0_MessageTable[2],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test12N0_3_SrcRef[] = {{0, 11}, {1, 11}};
static TAT_SIG_OrderSpeedRequest tat_battleshipstest_Test12N0_3_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test12N0_3_event = {TAT_RECV_EV, TAT_S_OrderSpeedRequest_ID, &tat_battleshipstest_Test12N0_3_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test12N0_N3, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test12N0_3_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test12N0_MessageTable[3],
NULL};

static TAT_SRC_REF_STRUCT tat_battleshipstest_Test12N0_4_SrcRef[] = {{0, 13}, {1, 13}};
static TAT_SIG_FinishSimulation tat_battleshipstest_Test12N0_4_sigdata;
static TAT_EVENT_INSTANCE tat_battleshipstest_Test12N0_4_event = {TAT_RECV_EV, TAT_S_FinishSimulation_ID, &tat_battleshipstest_Test12N0_4_sigdata, {{0,0}, {0,0}, ""},2, 
(TAT_INSTANCE_ID *) &tat_I_battleshipstest_Test12N0_N4, "", 2, (TAT_SRC_REF_STRUCT *) tat_battleshipstest_Test12N0_4_SrcRef, 
TAT_VERDICT_PASS, -1, &tat_battleshipstest_Test12N0_MessageTable[4],
NULL};

tStringShipCurrentState TAT_Ass_Test12N0_1_1 (TAT_TEST_INSTANCE *id) {
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
	TAT_tStringShipCurrentState_Cur->Data.Speed=0;
	TAT_tStringShipCurrentState_Cur->Data.Heading=SOUTH_WEST;
	TAT_tStringShipCurrentState_Cur->Data.Resource=70;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.x=180;
	TAT_tStringShipCurrentState_Cur->Data.Coordinates.y=75;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[0]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[1]=15;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[2]=3;
	TAT_tStringShipCurrentState_Cur->Data.Ammunition.A[3]=0;
	return x;
}
static TAT_TEST_RESULT tat_Test12N0_state0(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test12N0_0_event, sizeof(__ev));
			if (TAT_Send_InitDataComplete(id, &__ev, &tat_battleshipstest_Test12N0_0_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=1;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test12N0_state1(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test12N0_1_event, sizeof(__ev));
			if (TAT_Send_ShipsCurrentState(id, &__ev, &tat_battleshipstest_Test12N0_1_event, 1, TAT_Ass_Test12N0_1_1(id))!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=2;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test12N0_state2(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE __ev;
		if ((id->clock-id->lastEvent>=0)) {
			memcpy(&__ev, &tat_battleshipstest_Test12N0_2_event, sizeof(__ev));
			if (TAT_Send_StartSimulation(id, &__ev, &tat_battleshipstest_Test12N0_2_event, 0)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->lastEvent = id->clock;
			id->nextState=3;
		}
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test12N0_state3(TAT_TEST_INSTANCE *id)
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
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test12N0_3_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=4;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
static TAT_TEST_RESULT tat_Test12N0_state4(TAT_TEST_INSTANCE *id)
{
	TAT_EVENT_INSTANCE *_ev;
	if (id->queue.length>0) {
		_ev = id->getQueue(id);
		if ((_ev->eventTime.timeCalc.minTime-id->lastEvent>=0)) {
			if ((_ev->eventID == TAT_S_FinishSimulation_ID)&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param1==(0)))&&
				((((TAT_SIG_FinishSimulation *)_ev->eventData)->Param2==(1)))){
				id->lastEvent = id->clock;
				if (id->dumpEvent(id, _ev, &tat_battleshipstest_Test12N0_4_event)!=TAT_TEST_CONTINUE) return TAT_TEST_CRITICAL;
				id->popQueue(id);
				id->nextState=-1;
				return TAT_TEST_CONTINUE;
			}
		}
	};
	return TAT_TEST_FINISHED;
}
TAT_TEST_RESULT TAT_T_battleshipstest_Test12N0( TAT_TEST_INSTANCE* id )
{
	static const TAT_STATE_FUNC states[5]={
	tat_Test12N0_state0,tat_Test12N0_state1,tat_Test12N0_state2,tat_Test12N0_state3,tat_Test12N0_state4};
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
