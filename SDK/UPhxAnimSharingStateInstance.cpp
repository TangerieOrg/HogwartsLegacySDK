#include "EFacialAnimType.hpp"
#include "UAimEyesData.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSharingStateInstance.hpp"
#include "UPhxAnimSharingStateInstance.hpp"
#include "UPoseAsset.hpp"
UPhxAnimSharingStateInstance* UPhxAnimSharingStateInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxAnimSharingStateInstance");
    return (UPhxAnimSharingStateInstance*)res;
}
