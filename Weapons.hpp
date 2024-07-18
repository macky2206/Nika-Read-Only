#pragma once
constexpr int WEAPON_R301 = 0;
constexpr int WEAPON_SENTINEL = 1;
constexpr int WEAPON_BOCEK = 2;
constexpr int WEAPON_RAMPAGE = 6;
constexpr int WEAPON_RAMPART_SHEILA_STATIONARY = 14;
constexpr int WEAPON_ALTERNATOR = 84;
constexpr int WEAPON_RE45 = 85;
constexpr int WEAPON_CHARGE_RIFLE = 87;
constexpr int WEAPON_DEVOTION = 89;
constexpr int WEAPON_LONGBOW = 90;
constexpr int WEAPON_HAVOC = 91;
constexpr int WEAPON_EVA8 = 93;
constexpr int WEAPON_FLATLINE = 94;
constexpr int WEAPON_G7 = 95;
constexpr int WEAPON_HEMLOCK = 96;
constexpr int WEAPON_KRABER = 98;
constexpr int WEAPON_LSTAR = 99;
constexpr int WEAPON_MASTIFF = 101;
constexpr int WEAPON_MOZAMBIQUE = 102;
constexpr int WEAPON_PROWLER = 107;
constexpr int WEAPON_PEACEKEEPER = 109;
constexpr int WEAPON_R99 = 110;
constexpr int WEAPON_P2020 = 111;
constexpr int WEAPON_SPITFIRE = 112;
constexpr int WEAPON_TRIPLE_TAKE = 113;
constexpr int WEAPON_WINGMAN = 114;
constexpr int WEAPON_VOLT = 116;
constexpr int WEAPON_3030 = 117;
constexpr int WEAPON_CAR = 118;
constexpr int WEAPON_NEMESIS = 119;
constexpr int WEAPON_MELEE = 120;
constexpr int WEAPON_THROWING_KNIFE = 173;

std::unordered_map<int, std::string> intToStringMap = {
    {WEAPON_R301, "WEAPON_R301"},
    {WEAPON_SENTINEL, "WEAPON_SENTINEL"},
    {WEAPON_BOCEK, "WEAPON_BOCEK"},
    {WEAPON_RAMPAGE, "WEAPON_RAMPAGE"},
    {WEAPON_RAMPART_SHEILA_STATIONARY, "WEAPON_RAMPART_SHEILA_STATIONARY"},
    {WEAPON_ALTERNATOR, "WEAPON_ALTERNATOR"},
    {WEAPON_RE45, "WEAPON_RE45"},
    {WEAPON_CHARGE_RIFLE, "WEAPON_CHARGE_RIFLE"},
    {WEAPON_DEVOTION, "WEAPON_DEVOTION"},
    {WEAPON_LONGBOW, "WEAPON_LONGBOW"},
    {WEAPON_HAVOC, "WEAPON_HAVOC"},
    {WEAPON_EVA8, "WEAPON_EVA8"},
    {WEAPON_FLATLINE, "WEAPON_FLATLINE"},
    {WEAPON_G7, "WEAPON_G7"},
    {WEAPON_HEMLOCK, "WEAPON_HEMLOCK"},
    {WEAPON_KRABER, "WEAPON_KRABER"},
    {WEAPON_LSTAR, "WEAPON_LSTAR"},
    {WEAPON_MASTIFF, "WEAPON_MASTIFF"},
    {WEAPON_MOZAMBIQUE, "WEAPON_MOZAMBIQUE"},
    {WEAPON_PROWLER, "WEAPON_PROWLER"},
    {WEAPON_PEACEKEEPER, "WEAPON_PEACEKEEPER"},
    {WEAPON_R99, "WEAPON_R99"},
    {WEAPON_P2020, "WEAPON_P2020"},
    {WEAPON_SPITFIRE, "WEAPON_SPITFIRE"},
    {WEAPON_TRIPLE_TAKE, "WEAPON_TRIPLE_TAKE"},
    {WEAPON_WINGMAN, "WEAPON_WINGMAN"},
    {WEAPON_VOLT, "WEAPON_VOLT"},
    {WEAPON_3030, "WEAPON_3030"},
    {WEAPON_CAR, "WEAPON_CAR"},
    {WEAPON_NEMESIS, "WEAPON_NEMESIS"},
    {WEAPON_MELEE, "WEAPON_MELEE"},
    {WEAPON_THROWING_KNIFE, "WEAPON_THROWING_KNIFE"}
    };

std::string WeaponName(int weaponId) {
    auto it = intToStringMap.find(weaponId);
    if (it != intToStringMap.end())
        return it->second;
    return "UNKNOWN! NEED WEAPONID UPDATE!?";
}
