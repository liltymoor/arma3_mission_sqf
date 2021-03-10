Freddy_fnc_saveMoney = {
  MoneyPlayer = MoneyPlayer + MoneyOnHand;
  MoneyOnHand = MoneyOnHand - MoneyOnHand;

    _UID = getPlayerUID player;
  [MoneyPlayer, _UID] remoteExec ["PENA_DB_SAVEMONEY", 2 , false];
};