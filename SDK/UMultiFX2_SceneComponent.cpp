#include "UClass.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SceneComponent.hpp"
UMultiFX2_SceneComponent* UMultiFX2_SceneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SceneComponent");
    return (UMultiFX2_SceneComponent*)res;
}
