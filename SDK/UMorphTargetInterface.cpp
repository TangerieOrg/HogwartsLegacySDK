#include "UInterface.hpp"
#include "UMorphTargetInterface.hpp"
void UMorphTargetInterface::OnMorphTargetsReceived() {}
UMorphTargetInterface* UMorphTargetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MorphTargetInterface");
    return (UMorphTargetInterface*)res;
}
