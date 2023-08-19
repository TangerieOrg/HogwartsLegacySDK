#include "AActor.hpp"
#include "ABP_Vault_Door_C.hpp"
#include "USceneComponent.hpp"
ABP_Vault_Door_C* ABP_Vault_Door_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Vaults/Blueprints/BP_Vault_Door.BP_Vault_Door_C");
    return (ABP_Vault_Door_C*)res;
}
