#include "ECameraStackResetType.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_ResetCut.hpp"
UBTT_Camera_ResetCut* UBTT_Camera_ResetCut::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_ResetCut");
    return (UBTT_Camera_ResetCut*)res;
}
