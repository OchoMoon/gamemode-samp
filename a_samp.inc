
#if defined _a_samp_included
  #endinput
#endif
#define _a_samp_included

native print(const string[]);
native SetTimer(name[], interval, repeating);
native KillTimer(timerid);
native GetTickCount();
native format(output[], len, format[], {Float,_}:...);
native strlen(const string[]);
native SendClientMessage(playerid, color, const message[]);
native SetPlayerPos(playerid, Float:x, Float:y, Float:z);
native SetPlayerHealth(playerid, Float:health);
native GivePlayerMoney(playerid, money);
native ResetPlayerMoney(playerid);
native GetPlayerName(playerid, name[], len);

forward OnGameModeInit();
forward OnGameModeExit();
forward OnPlayerConnect(playerid);
forward OnPlayerDisconnect(playerid, reason);
forward OnPlayerSpawn(playerid);
forward OnPlayerDeath(playerid, killerid, reason);
forward OnPlayerText(playerid, text[]);
