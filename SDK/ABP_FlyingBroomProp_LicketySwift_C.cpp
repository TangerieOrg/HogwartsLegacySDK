#include "ABP_FlyingBroomProp_C.hpp"
#include "ABP_FlyingBroomProp_LicketySwift_C.hpp"
ABP_FlyingBroomProp_LicketySwift_C* ABP_FlyingBroomProp_LicketySwift_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/Brooms/LicketySwift/BP_FlyingBroomProp_LicketySwift.BP_FlyingBroomProp_LicketySwift_C");
    return (ABP_FlyingBroomProp_LicketySwift_C*)res;
}
