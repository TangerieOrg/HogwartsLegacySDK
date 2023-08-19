#include "AActor.hpp"
#include "FDynamicSplineUsage.hpp"
#include "UDynamicSplineNDI.hpp"
#include "UDynamicSplineSet.hpp"
#include "UNiagaraDataInterface.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
UDynamicSplineNDI* UDynamicSplineNDI::StaticClass() {
    static auto res = find_uobject("Class /Script/DynamicSplinesRuntime.DynamicSplineNDI");
    return (UDynamicSplineNDI*)res;
}
