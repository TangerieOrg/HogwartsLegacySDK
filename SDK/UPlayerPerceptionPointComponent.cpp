#include "APerceptionPoint.hpp"
#include "UAISenseConfig.hpp"
#include "UActorComponent.hpp"
#include "UPlayerPerceptionPointComponent.hpp"
#include "UPlayer_FootfallDataAsset.hpp"
UPlayerPerceptionPointComponent* UPlayerPerceptionPointComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerPerceptionPointComponent");
    return (UPlayerPerceptionPointComponent*)res;
}
