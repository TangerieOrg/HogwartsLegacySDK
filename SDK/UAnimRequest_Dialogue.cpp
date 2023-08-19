#include "FAnimationTrack.hpp"
#include "UAnimRequest_Dialogue.hpp"
#include "UObject.hpp"
UAnimRequest_Dialogue* UAnimRequest_Dialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimRequest_Dialogue");
    return (UAnimRequest_Dialogue*)res;
}
