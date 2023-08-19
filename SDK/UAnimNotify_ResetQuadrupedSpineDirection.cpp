#include "UAnimNotify.hpp"
#include "UAnimNotify_ResetQuadrupedSpineDirection.hpp"
UAnimNotify_ResetQuadrupedSpineDirection* UAnimNotify_ResetQuadrupedSpineDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_ResetQuadrupedSpineDirection");
    return (UAnimNotify_ResetQuadrupedSpineDirection*)res;
}
