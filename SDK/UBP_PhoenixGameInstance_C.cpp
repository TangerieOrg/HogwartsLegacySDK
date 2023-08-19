#include "UBP_PhoenixGameInstance_C.hpp"
#include "UPhoenixGameInstance.hpp"
UBP_PhoenixGameInstance_C* UBP_PhoenixGameInstance_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/GameInstance/BP_PhoenixGameInstance.BP_PhoenixGameInstance_C");
    return (UBP_PhoenixGameInstance_C*)res;
}
