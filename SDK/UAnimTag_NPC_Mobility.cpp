#include "ENPC_Mobility.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimTag_NPC_Mobility.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_NPC_Mobility* UAnimTag_NPC_Mobility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_NPC_Mobility");
    return (UAnimTag_NPC_Mobility*)res;
}
