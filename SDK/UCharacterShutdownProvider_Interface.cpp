#include "UCharacterShutdownProvider_Interface.hpp"
#include "UInterface.hpp"
UCharacterShutdownProvider_Interface* UCharacterShutdownProvider_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterShutdownProvider_Interface");
    return (UCharacterShutdownProvider_Interface*)res;
}
