#include "FAnimTrack.hpp"
#include "UAnimComposite.hpp"
#include "UAnimCompositeBase.hpp"
UAnimComposite* UAnimComposite::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimComposite");
    return (UAnimComposite*)res;
}
