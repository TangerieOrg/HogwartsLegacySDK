#include "UInterface.hpp"
#include "UNPC_Character_Interface.hpp"
UNPC_Character_Interface* UNPC_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Character_Interface");
    return (UNPC_Character_Interface*)res;
}
