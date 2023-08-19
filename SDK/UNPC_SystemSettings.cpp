#include "FNPC_OptimizationSettings.hpp"
#include "UDeveloperSettings.hpp"
#include "UNPC_SystemSettings.hpp"
UNPC_SystemSettings* UNPC_SystemSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_SystemSettings");
    return (UNPC_SystemSettings*)res;
}
