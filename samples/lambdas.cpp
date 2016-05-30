vm.registerExternalFunction("print", [](ZenLoad::DaedalusVM& vm){
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;

});

vm.registerExternalFunction("printmulti", [](ZenLoad::DaedalusVM& vm){
std::string s4 = vm.popString(); if(verbose) LogInfo() << "s4: " << s4;
std::string s3 = vm.popString(); if(verbose) LogInfo() << "s3: " << s3;
std::string s2 = vm.popString(); if(verbose) LogInfo() << "s2: " << s2;
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;

});

vm.registerExternalFunction("printdebug", [](ZenLoad::DaedalusVM& vm){
std::string s = vm.popString(); if(verbose) LogInfo() << "s: " << s;

});

vm.registerExternalFunction("printscreen", [](ZenLoad::DaedalusVM& vm){
int32_t timesec = vm.popDataValue(); if(verbose) LogInfo() << "timesec: " << timesec;
std::string font = vm.popString(); if(verbose) LogInfo() << "font: " << font;
int32_t posy = vm.popDataValue(); if(verbose) LogInfo() << "posy: " << posy;
int32_t posx = vm.popDataValue(); if(verbose) LogInfo() << "posx: " << posx;
std::string msg = vm.popString(); if(verbose) LogInfo() << "msg: " << msg;
int32_t dialognr = vm.popDataValue(); if(verbose) LogInfo() << "dialognr: " << dialognr;

});

vm.registerExternalFunction("hlp_random", [](ZenLoad::DaedalusVM& vm){
int32_t n0 = vm.popDataValue(); if(verbose) LogInfo() << "n0: " << n0;
vm.setReturn(0);
});

vm.registerExternalFunction("hlp_strcmp", [](ZenLoad::DaedalusVM& vm){
std::string s2 = vm.popString(); if(verbose) LogInfo() << "s2: " << s2;
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
vm.setReturn(0);
});

vm.registerExternalFunction("hlp_isvalidnpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("hlp_isvaliditem", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("hlp_isitem", [](ZenLoad::DaedalusVM& vm){
int32_t instancename = vm.popDataValue(); if(verbose) LogInfo() << "instancename: " << instancename;

vm.setReturn(0);
});

vm.registerExternalFunction("hlp_getnpc", [](ZenLoad::DaedalusVM& vm){
int32_t instancename = vm.popDataValue(); if(verbose) LogInfo() << "instancename: " << instancename;
vm.setReturnVar(0);
});

vm.registerExternalFunction("hlp_getinstanceid", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("hlp_getinstanceid", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("ai_wait", [](ZenLoad::DaedalusVM& vm){
float n1 = vm.popFloatValue(); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_getstatetime", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_setstatetime", [](ZenLoad::DaedalusVM& vm){
int32_t seconds = vm.popDataValue(); if(verbose) LogInfo() << "seconds: " << seconds;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("wld_istime", [](ZenLoad::DaedalusVM& vm){
int32_t min2 = vm.popDataValue(); if(verbose) LogInfo() << "min2: " << min2;
int32_t hour2 = vm.popDataValue(); if(verbose) LogInfo() << "hour2: " << hour2;
int32_t min1 = vm.popDataValue(); if(verbose) LogInfo() << "min1: " << min1;
int32_t hour1 = vm.popDataValue(); if(verbose) LogInfo() << "hour1: " << hour1;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_insertnpc", [](ZenLoad::DaedalusVM& vm){
std::string spawnpoint = vm.popString(); if(verbose) LogInfo() << "spawnpoint: " << spawnpoint;
int32_t npcinstance = vm.popDataValue(); if(verbose) LogInfo() << "npcinstance: " << npcinstance;

});

vm.registerExternalFunction("wld_insertnpcandrespawn", [](ZenLoad::DaedalusVM& vm){
float spawndelay = vm.popFloatValue(); if(verbose) LogInfo() << "spawndelay: " << spawndelay;
std::string spawnpoint = vm.popString(); if(verbose) LogInfo() << "spawnpoint: " << spawnpoint;
int32_t instance = vm.popDataValue(); if(verbose) LogInfo() << "instance: " << instance;

});

vm.registerExternalFunction("ai_playani", [](ZenLoad::DaedalusVM& vm){
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_standup", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_standupquick", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_quicklook", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_lookat", [](ZenLoad::DaedalusVM& vm){
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_lookatnpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_stoplookat", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_pointat", [](ZenLoad::DaedalusVM& vm){
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_pointatnpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_stoppointat", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_takeitem", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_dropitem", [](ZenLoad::DaedalusVM& vm){
int32_t itemid = vm.popDataValue(); if(verbose) LogInfo() << "itemid: " << itemid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_useitem", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_useitemtostate", [](ZenLoad::DaedalusVM& vm){
int32_t state = vm.popDataValue(); if(verbose) LogInfo() << "state: " << state;
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_usemob", [](ZenLoad::DaedalusVM& vm){
int32_t targetstate = vm.popDataValue(); if(verbose) LogInfo() << "targetstate: " << targetstate;
std::string schemename = vm.popString(); if(verbose) LogInfo() << "schemename: " << schemename;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_ismobavailable", [](ZenLoad::DaedalusVM& vm){
std::string schemename = vm.popString(); if(verbose) LogInfo() << "schemename: " << schemename;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_getmobstate", [](ZenLoad::DaedalusVM& vm){
std::string schemename = vm.popString(); if(verbose) LogInfo() << "schemename: " << schemename;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_setwalkmode", [](ZenLoad::DaedalusVM& vm){
int32_t n0 = vm.popDataValue(); if(verbose) LogInfo() << "n0: " << n0;
uint32_t arr_n;
int32_t n = vm.popVar(arr_n); if(verbose) LogInfo() << "n: " << n;

});

vm.registerExternalFunction("ai_gotowp", [](ZenLoad::DaedalusVM& vm){
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_gotofp", [](ZenLoad::DaedalusVM& vm){
std::string fpname = vm.popString(); if(verbose) LogInfo() << "fpname: " << fpname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_gotonextfp", [](ZenLoad::DaedalusVM& vm){
std::string fpname = vm.popString(); if(verbose) LogInfo() << "fpname: " << fpname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_gotonpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_gotoitem", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_gotosound", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_teleport", [](ZenLoad::DaedalusVM& vm){
std::string waypoint = vm.popString(); if(verbose) LogInfo() << "waypoint: " << waypoint;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_getnearestwp", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn("");
});

vm.registerExternalFunction("npc_getnextwp", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn("");
});

vm.registerExternalFunction("wld_isfpavailable", [](ZenLoad::DaedalusVM& vm){
std::string fpname = vm.popString(); if(verbose) LogInfo() << "fpname: " << fpname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_isnextfpavailable", [](ZenLoad::DaedalusVM& vm){
std::string fpname = vm.popString(); if(verbose) LogInfo() << "fpname: " << fpname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isonfp", [](ZenLoad::DaedalusVM& vm){
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_iswayblocked", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_turntonpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n1;
int32_t n1 = vm.popVar(arr_n1); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_turnaway", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n1;
int32_t n1 = vm.popVar(arr_n1); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_whirlaround", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_turntosound", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_aligntowp", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_dodge", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;

});

vm.registerExternalFunction("mdl_applyoverlaymds", [](ZenLoad::DaedalusVM& vm){
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("mdl_removeoverlaymds", [](ZenLoad::DaedalusVM& vm){
std::string overlayname = vm.popString(); if(verbose) LogInfo() << "overlayname: " << overlayname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("mdl_applyoverlaymdstimed", [](ZenLoad::DaedalusVM& vm){
float timeticks = vm.popFloatValue(); if(verbose) LogInfo() << "timeticks: " << timeticks;
std::string overlayname = vm.popString(); if(verbose) LogInfo() << "overlayname: " << overlayname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("mdl_applyrandomani", [](ZenLoad::DaedalusVM& vm){
std::string s2 = vm.popString(); if(verbose) LogInfo() << "s2: " << s2;
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("mdl_applyrandomanifreq", [](ZenLoad::DaedalusVM& vm){
float f2 = vm.popFloatValue(); if(verbose) LogInfo() << "f2: " << f2;
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("mdl_startfaceani", [](ZenLoad::DaedalusVM& vm){
float holdtime = vm.popFloatValue(); if(verbose) LogInfo() << "holdtime: " << holdtime;
float intensity = vm.popFloatValue(); if(verbose) LogInfo() << "intensity: " << intensity;
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("mdl_applyrandomfaceani", [](ZenLoad::DaedalusVM& vm){
float probmin = vm.popFloatValue(); if(verbose) LogInfo() << "probmin: " << probmin;
float timemaxvar = vm.popFloatValue(); if(verbose) LogInfo() << "timemaxvar: " << timemaxvar;
float timemax = vm.popFloatValue(); if(verbose) LogInfo() << "timemax: " << timemax;
float timeminvar = vm.popFloatValue(); if(verbose) LogInfo() << "timeminvar: " << timeminvar;
float timemin = vm.popFloatValue(); if(verbose) LogInfo() << "timemin: " << timemin;
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_getbodystate", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasbodyflag", [](ZenLoad::DaedalusVM& vm){
int32_t bodyflag = vm.popDataValue(); if(verbose) LogInfo() << "bodyflag: " << bodyflag;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_playanibs", [](ZenLoad::DaedalusVM& vm){
int32_t bodystate = vm.popDataValue(); if(verbose) LogInfo() << "bodystate: " << bodystate;
std::string aniname = vm.popString(); if(verbose) LogInfo() << "aniname: " << aniname;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;

});

vm.registerExternalFunction("npc_settofistmode", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_settofightmode", [](ZenLoad::DaedalusVM& vm){
int32_t weapon = vm.popDataValue(); if(verbose) LogInfo() << "weapon: " << weapon;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_isinfightmode", [](ZenLoad::DaedalusVM& vm){
int32_t fmode = vm.popDataValue(); if(verbose) LogInfo() << "fmode: " << fmode;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_drawweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_readymeleeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_readyrangedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_removeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_getreadiedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_hasreadiedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasreadiedmeleeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasreadiedrangedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasrangedweaponwithammo", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_gettarget", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getnexttarget", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isnexttargetavailable", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_settarget", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_attack", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_finishingmove", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_defend", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_flee", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_aimat", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_attacker;
int32_t attacker = vm.popVar(arr_attacker); if(verbose) LogInfo() << "attacker: " << attacker;

});

vm.registerExternalFunction("ai_shootat", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_attacker;
int32_t attacker = vm.popVar(arr_attacker); if(verbose) LogInfo() << "attacker: " << attacker;

});

vm.registerExternalFunction("ai_stopaim", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_attacker;
int32_t attacker = vm.popVar(arr_attacker); if(verbose) LogInfo() << "attacker: " << attacker;

});

vm.registerExternalFunction("npc_arewestronger", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isaiming", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_insertitem", [](ZenLoad::DaedalusVM& vm){
std::string spawnpoint = vm.popString(); if(verbose) LogInfo() << "spawnpoint: " << spawnpoint;
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;

});

vm.registerExternalFunction("ai_lookforitem", [](ZenLoad::DaedalusVM& vm){
int32_t instance = vm.popDataValue(); if(verbose) LogInfo() << "instance: " << instance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("wld_removeitem", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("createinvitem", [](ZenLoad::DaedalusVM& vm){
int32_t n1 = vm.popDataValue(); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("createinvitems", [](ZenLoad::DaedalusVM& vm){
int32_t n2 = vm.popDataValue(); if(verbose) LogInfo() << "n2: " << n2;
int32_t n1 = vm.popDataValue(); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_getinvitem", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_hasitems", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getinvitembyslot", [](ZenLoad::DaedalusVM& vm){
int32_t slotnr = vm.popDataValue(); if(verbose) LogInfo() << "slotnr: " << slotnr;
int32_t category = vm.popDataValue(); if(verbose) LogInfo() << "category: " << category;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_removeinvitem", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_owner;
int32_t owner = vm.popVar(arr_owner); if(verbose) LogInfo() << "owner: " << owner;

});

vm.registerExternalFunction("npc_removeinvitems", [](ZenLoad::DaedalusVM& vm){
int32_t amount = vm.popDataValue(); if(verbose) LogInfo() << "amount: " << amount;
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_owner;
int32_t owner = vm.popVar(arr_owner); if(verbose) LogInfo() << "owner: " << owner;

});

vm.registerExternalFunction("mob_createitems", [](ZenLoad::DaedalusVM& vm){
int32_t amount = vm.popDataValue(); if(verbose) LogInfo() << "amount: " << amount;
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
std::string mobname = vm.popString(); if(verbose) LogInfo() << "mobname: " << mobname;

});

vm.registerExternalFunction("mob_hasitems", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
std::string mobname = vm.popString(); if(verbose) LogInfo() << "mobname: " << mobname;
vm.setReturn(0);
});

vm.registerExternalFunction("equipitem", [](ZenLoad::DaedalusVM& vm){
int32_t n1 = vm.popDataValue(); if(verbose) LogInfo() << "n1: " << n1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("ai_equipbestmeleeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_equipbestrangedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_equipbestarmor", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_unequipweapons", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_unequiparmor", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_equiparmor", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_owner;
int32_t owner = vm.popVar(arr_owner); if(verbose) LogInfo() << "owner: " << owner;

});

vm.registerExternalFunction("npc_getequippedmeleeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_getequippedrangedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_getequippedarmor", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_hasequippedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasequippedmeleeweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasequippedrangedweapon", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasequippedarmor", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_ownedbynpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;

vm.setReturn(0);
});

vm.registerExternalFunction("npc_ownedbyguild", [](ZenLoad::DaedalusVM& vm){
int32_t guild = vm.popDataValue(); if(verbose) LogInfo() << "guild: " << guild;

vm.setReturn(0);
});

vm.registerExternalFunction("npc_isdetectedmobownedbynpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_owner;
int32_t owner = vm.popVar(arr_owner); if(verbose) LogInfo() << "owner: " << owner;
uint32_t arr_user;
int32_t user = vm.popVar(arr_user); if(verbose) LogInfo() << "user: " << user;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_giveitem", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n2;
int32_t n2 = vm.popVar(arr_n2); if(verbose) LogInfo() << "n2: " << n2;

uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("npc_startitemreactmodules", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasoffered", [](ZenLoad::DaedalusVM& vm){
int32_t iteminstance = vm.popDataValue(); if(verbose) LogInfo() << "iteminstance: " << iteminstance;
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("doc_open", [](ZenLoad::DaedalusVM& vm){
std::string picname = vm.popString(); if(verbose) LogInfo() << "picname: " << picname;

});

vm.registerExternalFunction("doc_font", [](ZenLoad::DaedalusVM& vm){
std::string fontname = vm.popString(); if(verbose) LogInfo() << "fontname: " << fontname;

});

vm.registerExternalFunction("doc_print", [](ZenLoad::DaedalusVM& vm){
std::string text = vm.popString(); if(verbose) LogInfo() << "text: " << text;

});

vm.registerExternalFunction("doc_mapcoordinates", [](ZenLoad::DaedalusVM& vm){
float pixely2 = vm.popFloatValue(); if(verbose) LogInfo() << "pixely2: " << pixely2;
float pixelx2 = vm.popFloatValue(); if(verbose) LogInfo() << "pixelx2: " << pixelx2;
float gamey2 = vm.popFloatValue(); if(verbose) LogInfo() << "gamey2: " << gamey2;
float gamex2 = vm.popFloatValue(); if(verbose) LogInfo() << "gamex2: " << gamex2;
float pixely1 = vm.popFloatValue(); if(verbose) LogInfo() << "pixely1: " << pixely1;
float pixelx1 = vm.popFloatValue(); if(verbose) LogInfo() << "pixelx1: " << pixelx1;
float gamey1 = vm.popFloatValue(); if(verbose) LogInfo() << "gamey1: " << gamey1;
float gamex1 = vm.popFloatValue(); if(verbose) LogInfo() << "gamex1: " << gamex1;
std::string levelname = vm.popString(); if(verbose) LogInfo() << "levelname: " << levelname;

});

vm.registerExternalFunction("ai_output", [](ZenLoad::DaedalusVM& vm){
std::string outputname = vm.popString(); if(verbose) LogInfo() << "outputname: " << outputname;
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_outputsvm", [](ZenLoad::DaedalusVM& vm){
std::string svmname = vm.popString(); if(verbose) LogInfo() << "svmname: " << svmname;
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_outputsvm_overlay", [](ZenLoad::DaedalusVM& vm){
std::string svmname = vm.popString(); if(verbose) LogInfo() << "svmname: " << svmname;
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_waittillend", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_ask", [](ZenLoad::DaedalusVM& vm){


uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_asktext", [](ZenLoad::DaedalusVM& vm){
std::string strno = vm.popString(); if(verbose) LogInfo() << "strno: " << strno;
std::string stryes = vm.popString(); if(verbose) LogInfo() << "stryes: " << stryes;


uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_waitforquestion", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_setrefusetalk", [](ZenLoad::DaedalusVM& vm){
int32_t timesec = vm.popDataValue(); if(verbose) LogInfo() << "timesec: " << timesec;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_refusetalk", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_memoryentry", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_victim;
int32_t victim = vm.popVar(arr_victim); if(verbose) LogInfo() << "victim: " << victim;
int32_t newsid = vm.popDataValue(); if(verbose) LogInfo() << "newsid: " << newsid;
uint32_t arr_offender;
int32_t offender = vm.popVar(arr_offender); if(verbose) LogInfo() << "offender: " << offender;
int32_t source = vm.popDataValue(); if(verbose) LogInfo() << "source: " << source;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_memoryentryguild", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_victimguild;
int32_t victimguild = vm.popVar(arr_victimguild); if(verbose) LogInfo() << "victimguild: " << victimguild;
int32_t newsid = vm.popDataValue(); if(verbose) LogInfo() << "newsid: " << newsid;
uint32_t arr_offender;
int32_t offender = vm.popVar(arr_offender); if(verbose) LogInfo() << "offender: " << offender;
int32_t source = vm.popDataValue(); if(verbose) LogInfo() << "source: " << source;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_hasnews", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_victim;
int32_t victim = vm.popVar(arr_victim); if(verbose) LogInfo() << "victim: " << victim;
uint32_t arr_offender;
int32_t offender = vm.popVar(arr_offender); if(verbose) LogInfo() << "offender: " << offender;
int32_t newsid = vm.popDataValue(); if(verbose) LogInfo() << "newsid: " << newsid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isnewsgossip", [](ZenLoad::DaedalusVM& vm){
int32_t newsnumber = vm.popDataValue(); if(verbose) LogInfo() << "newsnumber: " << newsnumber;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getnewswitness", [](ZenLoad::DaedalusVM& vm){
int32_t newsnumber = vm.popDataValue(); if(verbose) LogInfo() << "newsnumber: " << newsnumber;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturnVar(0);
});

vm.registerExternalFunction("npc_getnewsvictim", [](ZenLoad::DaedalusVM& vm){
int32_t newsnumber = vm.popDataValue(); if(verbose) LogInfo() << "newsnumber: " << newsnumber;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturnVar(0);
});

vm.registerExternalFunction("npc_getnewsoffender", [](ZenLoad::DaedalusVM& vm){
int32_t newsnumber = vm.popDataValue(); if(verbose) LogInfo() << "newsnumber: " << newsnumber;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturnVar(0);
});

vm.registerExternalFunction("npc_isdead", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_knowsinfo", [](ZenLoad::DaedalusVM& vm){
int32_t infoinstance = vm.popDataValue(); if(verbose) LogInfo() << "infoinstance: " << infoinstance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_checkinfo", [](ZenLoad::DaedalusVM& vm){
int32_t important = vm.popDataValue(); if(verbose) LogInfo() << "important: " << important;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_giveinfo", [](ZenLoad::DaedalusVM& vm){
int32_t important = vm.popDataValue(); if(verbose) LogInfo() << "important: " << important;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_checkavailablemission", [](ZenLoad::DaedalusVM& vm){
int32_t important = vm.popDataValue(); if(verbose) LogInfo() << "important: " << important;
int32_t missionstate = vm.popDataValue(); if(verbose) LogInfo() << "missionstate: " << missionstate;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_checkrunningmission", [](ZenLoad::DaedalusVM& vm){
int32_t important = vm.popDataValue(); if(verbose) LogInfo() << "important: " << important;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_checkoffermission", [](ZenLoad::DaedalusVM& vm){
int32_t important = vm.popDataValue(); if(verbose) LogInfo() << "important: " << important;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("mis_setstatus", [](ZenLoad::DaedalusVM& vm){
int32_t newstatus = vm.popDataValue(); if(verbose) LogInfo() << "newstatus: " << newstatus;
int32_t missionname = vm.popDataValue(); if(verbose) LogInfo() << "missionname: " << missionname;

});

vm.registerExternalFunction("mis_getstatus", [](ZenLoad::DaedalusVM& vm){
int32_t missionname = vm.popDataValue(); if(verbose) LogInfo() << "missionname: " << missionname;
vm.setReturn(0);
});

vm.registerExternalFunction("mis_ontime", [](ZenLoad::DaedalusVM& vm){
int32_t missionname = vm.popDataValue(); if(verbose) LogInfo() << "missionname: " << missionname;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_stopprocessinfos", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;

});

vm.registerExternalFunction("npc_isplayer", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_player;
int32_t player = vm.popVar(arr_player); if(verbose) LogInfo() << "player: " << player;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_detectplayer", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasdetectednpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isnear", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getdisttonpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc2;
int32_t npc2 = vm.popVar(arr_npc2); if(verbose) LogInfo() << "npc2: " << npc2;
uint32_t arr_npc1;
int32_t npc1 = vm.popVar(arr_npc1); if(verbose) LogInfo() << "npc1: " << npc1;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getdisttowp", [](ZenLoad::DaedalusVM& vm){
std::string wpname = vm.popString(); if(verbose) LogInfo() << "wpname: " << wpname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getdisttoitem", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getdisttoplayer", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc1;
int32_t npc1 = vm.popVar(arr_npc1); if(verbose) LogInfo() << "npc1: " << npc1;
vm.setReturn(0);
});

vm.registerExternalFunction("snd_getdisttosource", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_gettrueguild", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_setattitude", [](ZenLoad::DaedalusVM& vm){
int32_t att = vm.popDataValue(); if(verbose) LogInfo() << "att: " << att;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_settempattitude", [](ZenLoad::DaedalusVM& vm){
int32_t att = vm.popDataValue(); if(verbose) LogInfo() << "att: " << att;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_getattitude", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_settrueguild", [](ZenLoad::DaedalusVM& vm){
int32_t guildid = vm.popDataValue(); if(verbose) LogInfo() << "guildid: " << guildid;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_setguildattitude", [](ZenLoad::DaedalusVM& vm){
int32_t guild2 = vm.popDataValue(); if(verbose) LogInfo() << "guild2: " << guild2;
int32_t attitude = vm.popDataValue(); if(verbose) LogInfo() << "attitude: " << attitude;
int32_t guild1 = vm.popDataValue(); if(verbose) LogInfo() << "guild1: " << guild1;

});

vm.registerExternalFunction("wld_getguildattitude", [](ZenLoad::DaedalusVM& vm){
int32_t guild2 = vm.popDataValue(); if(verbose) LogInfo() << "guild2: " << guild2;
int32_t guild1 = vm.popDataValue(); if(verbose) LogInfo() << "guild1: " << guild1;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getpermattitude", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_exchangeguildattitudes", [](ZenLoad::DaedalusVM& vm){
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;

});

vm.registerExternalFunction("npc_getguildattitude", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc_1;
int32_t npc_1 = vm.popVar(arr_npc_1); if(verbose) LogInfo() << "npc_1: " << npc_1;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_setknowsplayer", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_player;
int32_t player = vm.popVar(arr_player); if(verbose) LogInfo() << "player: " << player;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_knowsplayer", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_player;
int32_t player = vm.popVar(arr_player); if(verbose) LogInfo() << "player: " << player;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_startstate", [](ZenLoad::DaedalusVM& vm){
std::string wpname = vm.popString(); if(verbose) LogInfo() << "wpname: " << wpname;
int32_t statebehaviour = vm.popDataValue(); if(verbose) LogInfo() << "statebehaviour: " << statebehaviour;

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_clearaiqueue", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_setnpcstostate", [](ZenLoad::DaedalusVM& vm){
int32_t radius = vm.popDataValue(); if(verbose) LogInfo() << "radius: " << radius;

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_isinstate", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_wasinstate", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ta", [](ZenLoad::DaedalusVM& vm){
std::string waypoint = vm.popString(); if(verbose) LogInfo() << "waypoint: " << waypoint;

int32_t stop_h = vm.popDataValue(); if(verbose) LogInfo() << "stop_h: " << stop_h;
int32_t start_h = vm.popDataValue(); if(verbose) LogInfo() << "start_h: " << start_h;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ta_min", [](ZenLoad::DaedalusVM& vm){
std::string waypoint = vm.popString(); if(verbose) LogInfo() << "waypoint: " << waypoint;

int32_t stop_m = vm.popDataValue(); if(verbose) LogInfo() << "stop_m: " << stop_m;
int32_t stop_h = vm.popDataValue(); if(verbose) LogInfo() << "stop_h: " << stop_h;
int32_t start_m = vm.popDataValue(); if(verbose) LogInfo() << "start_m: " << start_m;
int32_t start_h = vm.popDataValue(); if(verbose) LogInfo() << "start_h: " << start_h;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_continueroutine", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_isinroutine", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_exchangeroutine", [](ZenLoad::DaedalusVM& vm){
std::string routinename = vm.popString(); if(verbose) LogInfo() << "routinename: " << routinename;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("wld_setobjectroutine", [](ZenLoad::DaedalusVM& vm){
int32_t state = vm.popDataValue(); if(verbose) LogInfo() << "state: " << state;
std::string objname = vm.popString(); if(verbose) LogInfo() << "objname: " << objname;
int32_t min1 = vm.popDataValue(); if(verbose) LogInfo() << "min1: " << min1;
int32_t hour1 = vm.popDataValue(); if(verbose) LogInfo() << "hour1: " << hour1;

});

vm.registerExternalFunction("wld_setmobroutine", [](ZenLoad::DaedalusVM& vm){
int32_t state = vm.popDataValue(); if(verbose) LogInfo() << "state: " << state;
std::string objname = vm.popString(); if(verbose) LogInfo() << "objname: " << objname;
int32_t min1 = vm.popDataValue(); if(verbose) LogInfo() << "min1: " << min1;
int32_t hour1 = vm.popDataValue(); if(verbose) LogInfo() << "hour1: " << hour1;

});

vm.registerExternalFunction("rtn_exchange", [](ZenLoad::DaedalusVM& vm){
std::string newroutine = vm.popString(); if(verbose) LogInfo() << "newroutine: " << newroutine;
std::string oldroutine = vm.popString(); if(verbose) LogInfo() << "oldroutine: " << oldroutine;

});

vm.registerExternalFunction("ta_beginoverlay", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ta_endoverlay", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ta_removeoverlay", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("mdl_setmodelscale", [](ZenLoad::DaedalusVM& vm){
float z = vm.popFloatValue(); if(verbose) LogInfo() << "z: " << z;
float y = vm.popFloatValue(); if(verbose) LogInfo() << "y: " << y;
float x = vm.popFloatValue(); if(verbose) LogInfo() << "x: " << x;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("mdl_setmodelfatness", [](ZenLoad::DaedalusVM& vm){
float fatness = vm.popFloatValue(); if(verbose) LogInfo() << "fatness: " << fatness;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_changeattribute", [](ZenLoad::DaedalusVM& vm){
int32_t value = vm.popDataValue(); if(verbose) LogInfo() << "value: " << value;
int32_t atr = vm.popDataValue(); if(verbose) LogInfo() << "atr: " << atr;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_hastalent", [](ZenLoad::DaedalusVM& vm){
int32_t tal = vm.popDataValue(); if(verbose) LogInfo() << "tal: " << tal;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_hasfighttalent", [](ZenLoad::DaedalusVM& vm){
int32_t tal = vm.popDataValue(); if(verbose) LogInfo() << "tal: " << tal;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_createspell", [](ZenLoad::DaedalusVM& vm){
int32_t spellnr = vm.popDataValue(); if(verbose) LogInfo() << "spellnr: " << spellnr;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_learnspell", [](ZenLoad::DaedalusVM& vm){
int32_t spellnr = vm.popDataValue(); if(verbose) LogInfo() << "spellnr: " << spellnr;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_setteleportpos", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_getactivespell", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getactivespellcat", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_setactivespellinfo", [](ZenLoad::DaedalusVM& vm){
int32_t i1 = vm.popDataValue(); if(verbose) LogInfo() << "i1: " << i1;
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getactivespelllevel", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ai_readyspell", [](ZenLoad::DaedalusVM& vm){
int32_t investmana = vm.popDataValue(); if(verbose) LogInfo() << "investmana: " << investmana;
int32_t spellid = vm.popDataValue(); if(verbose) LogInfo() << "spellid: " << spellid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_unreadyspell", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_hasspell", [](ZenLoad::DaedalusVM& vm){
int32_t spellid = vm.popDataValue(); if(verbose) LogInfo() << "spellid: " << spellid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_percenable", [](ZenLoad::DaedalusVM& vm){

int32_t percid = vm.popDataValue(); if(verbose) LogInfo() << "percid: " << percid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_percdisable", [](ZenLoad::DaedalusVM& vm){
int32_t percid = vm.popDataValue(); if(verbose) LogInfo() << "percid: " << percid;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_setperctime", [](ZenLoad::DaedalusVM& vm){
float seconds = vm.popFloatValue(); if(verbose) LogInfo() << "seconds: " << seconds;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("perc_setrange", [](ZenLoad::DaedalusVM& vm){
int32_t range = vm.popDataValue(); if(verbose) LogInfo() << "range: " << range;
int32_t percid = vm.popDataValue(); if(verbose) LogInfo() << "percid: " << percid;

});

vm.registerExternalFunction("npc_sendpassiveperc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc3;
int32_t npc3 = vm.popVar(arr_npc3); if(verbose) LogInfo() << "npc3: " << npc3;
uint32_t arr_npc2;
int32_t npc2 = vm.popVar(arr_npc2); if(verbose) LogInfo() << "npc2: " << npc2;
int32_t perc_type = vm.popDataValue(); if(verbose) LogInfo() << "perc_type: " << perc_type;
uint32_t arr_npc1;
int32_t npc1 = vm.popVar(arr_npc1); if(verbose) LogInfo() << "npc1: " << npc1;

});

vm.registerExternalFunction("npc_sendsingleperc", [](ZenLoad::DaedalusVM& vm){
int32_t percid = vm.popDataValue(); if(verbose) LogInfo() << "percid: " << percid;
uint32_t arr_target;
int32_t target = vm.popVar(arr_target); if(verbose) LogInfo() << "target: " << target;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("npc_perceiveall", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("wld_detectnpc", [](ZenLoad::DaedalusVM& vm){
int32_t guild = vm.popDataValue(); if(verbose) LogInfo() << "guild: " << guild;

int32_t instance = vm.popDataValue(); if(verbose) LogInfo() << "instance: " << instance;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_detectitem", [](ZenLoad::DaedalusVM& vm){
int32_t flags = vm.popDataValue(); if(verbose) LogInfo() << "flags: " << flags;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_getdetectedmob", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn("");
});

vm.registerExternalFunction("npc_canseenpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc2;
int32_t npc2 = vm.popVar(arr_npc2); if(verbose) LogInfo() << "npc2: " << npc2;
uint32_t arr_npc1;
int32_t npc1 = vm.popVar(arr_npc1); if(verbose) LogInfo() << "npc1: " << npc1;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_canseenpcfreelos", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_other;
int32_t other = vm.popVar(arr_other); if(verbose) LogInfo() << "other: " << other;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_canseeitem", [](ZenLoad::DaedalusVM& vm){

uint32_t arr_npc1;
int32_t npc1 = vm.popVar(arr_npc1); if(verbose) LogInfo() << "npc1: " << npc1;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_canseesource", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("ta_cs", [](ZenLoad::DaedalusVM& vm){
std::string rolename = vm.popString(); if(verbose) LogInfo() << "rolename: " << rolename;
std::string csname = vm.popString(); if(verbose) LogInfo() << "csname: " << csname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("ai_playcutscene", [](ZenLoad::DaedalusVM& vm){
std::string csname = vm.popString(); if(verbose) LogInfo() << "csname: " << csname;
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;

});

vm.registerExternalFunction("hlp_cutsceneplayed", [](ZenLoad::DaedalusVM& vm){
std::string csname = vm.popString(); if(verbose) LogInfo() << "csname: " << csname;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_isincutscene", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("snd_play", [](ZenLoad::DaedalusVM& vm){
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;

});

vm.registerExternalFunction("snd_play3d", [](ZenLoad::DaedalusVM& vm){
std::string s1 = vm.popString(); if(verbose) LogInfo() << "s1: " << s1;
uint32_t arr_n0;
int32_t n0 = vm.popVar(arr_n0); if(verbose) LogInfo() << "n0: " << n0;

});

vm.registerExternalFunction("snd_issourcenpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("snd_issourceitem", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_self;
int32_t self = vm.popVar(arr_self); if(verbose) LogInfo() << "self: " << self;
vm.setReturn(0);
});

vm.registerExternalFunction("wld_assignroomtoguild", [](ZenLoad::DaedalusVM& vm){
int32_t guild = vm.popDataValue(); if(verbose) LogInfo() << "guild: " << guild;
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;

});

vm.registerExternalFunction("wld_assignroomtonpc", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_roomowner;
int32_t roomowner = vm.popVar(arr_roomowner); if(verbose) LogInfo() << "roomowner: " << roomowner;
std::string s0 = vm.popString(); if(verbose) LogInfo() << "s0: " << s0;

});

vm.registerExternalFunction("wld_getplayerportalowner", [](ZenLoad::DaedalusVM& vm){

vm.setReturnVar(0);
});

vm.registerExternalFunction("wld_getplayerportalguild", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("wld_getformerplayerportalowner", [](ZenLoad::DaedalusVM& vm){

vm.setReturnVar(0);
});

vm.registerExternalFunction("wld_getformerplayerportalguild", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("npc_isplayerinmyroom", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("npc_wasplayerinmyroom", [](ZenLoad::DaedalusVM& vm){
uint32_t arr_npc;
int32_t npc = vm.popVar(arr_npc); if(verbose) LogInfo() << "npc: " << npc;
vm.setReturn(0);
});

vm.registerExternalFunction("inttostring", [](ZenLoad::DaedalusVM& vm){
int32_t x = vm.popDataValue(); if(verbose) LogInfo() << "x: " << x;
vm.setReturn("");
});

vm.registerExternalFunction("floattoint", [](ZenLoad::DaedalusVM& vm){
float x = vm.popFloatValue(); if(verbose) LogInfo() << "x: " << x;
vm.setReturn(0);
});

vm.registerExternalFunction("inttofloat", [](ZenLoad::DaedalusVM& vm){
int32_t x = vm.popDataValue(); if(verbose) LogInfo() << "x: " << x;
vm.setReturn(0.0f);
});

vm.registerExternalFunction("concatstrings", [](ZenLoad::DaedalusVM& vm){
std::string str2 = vm.popString(); if(verbose) LogInfo() << "str2: " << str2;
std::string str1 = vm.popString(); if(verbose) LogInfo() << "str1: " << str1;
vm.setReturn("");
});



vm.registerExternalFunction("log_createtopic", [](ZenLoad::DaedalusVM& vm){
int32_t section = vm.popDataValue(); if(verbose) LogInfo() << "section: " << section;
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;

});

vm.registerExternalFunction("log_settopicstatus", [](ZenLoad::DaedalusVM& vm){
int32_t status = vm.popDataValue(); if(verbose) LogInfo() << "status: " << status;
std::string name = vm.popString(); if(verbose) LogInfo() << "name: " << name;

});

vm.registerExternalFunction("log_addentry", [](ZenLoad::DaedalusVM& vm){
std::string entry = vm.popString(); if(verbose) LogInfo() << "entry: " << entry;
std::string topic = vm.popString(); if(verbose) LogInfo() << "topic: " << topic;

});

vm.registerExternalFunction("doc_create", [](ZenLoad::DaedalusVM& vm){

vm.setReturn(0);
});

vm.registerExternalFunction("doc_setpages", [](ZenLoad::DaedalusVM& vm){
int32_t pages = vm.popDataValue(); if(verbose) LogInfo() << "pages: " << pages;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_setpage", [](ZenLoad::DaedalusVM& vm){
int32_t vbool = vm.popDataValue(); if(verbose) LogInfo() << "vbool: " << vbool;
std::string pageimage = vm.popString(); if(verbose) LogInfo() << "pageimage: " << pageimage;
int32_t page = vm.popDataValue(); if(verbose) LogInfo() << "page: " << page;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_setfont", [](ZenLoad::DaedalusVM& vm){
std::string fontname = vm.popString(); if(verbose) LogInfo() << "fontname: " << fontname;
int32_t page = vm.popDataValue(); if(verbose) LogInfo() << "page: " << page;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_setmargins", [](ZenLoad::DaedalusVM& vm){
int32_t vbool = vm.popDataValue(); if(verbose) LogInfo() << "vbool: " << vbool;
int32_t bottommargin = vm.popDataValue(); if(verbose) LogInfo() << "bottommargin: " << bottommargin;
int32_t rightmargin = vm.popDataValue(); if(verbose) LogInfo() << "rightmargin: " << rightmargin;
int32_t topmargin = vm.popDataValue(); if(verbose) LogInfo() << "topmargin: " << topmargin;
int32_t leftmargin = vm.popDataValue(); if(verbose) LogInfo() << "leftmargin: " << leftmargin;
int32_t page = vm.popDataValue(); if(verbose) LogInfo() << "page: " << page;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_printline", [](ZenLoad::DaedalusVM& vm){
std::string text = vm.popString(); if(verbose) LogInfo() << "text: " << text;
int32_t page = vm.popDataValue(); if(verbose) LogInfo() << "page: " << page;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_printlines", [](ZenLoad::DaedalusVM& vm){
std::string text = vm.popString(); if(verbose) LogInfo() << "text: " << text;
int32_t page = vm.popDataValue(); if(verbose) LogInfo() << "page: " << page;
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});

vm.registerExternalFunction("doc_show", [](ZenLoad::DaedalusVM& vm){
int32_t handle = vm.popDataValue(); if(verbose) LogInfo() << "handle: " << handle;

});
