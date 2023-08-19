#include "EAvaReflectionCullType.hpp"
#include "EAvaReflectionTimeType.hpp"
#include "EMobileReflectionCompression.hpp"
#include "EReflectionSourceType.hpp"
#include "FGuid.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UReflectionCaptureComponent.hpp"
#include "USceneComponent.hpp"
#include "UTextureCube.hpp"
UReflectionCaptureComponent* UReflectionCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReflectionCaptureComponent");
    return (UReflectionCaptureComponent*)res;
}
