#include "AActor.hpp"
#include "ADatasmithAreaLightActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "EDatasmithAreaLightActorShape.hpp"
#include "EDatasmithAreaLightActorType.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UTextureLightProfile.hpp"
ADatasmithAreaLightActor* ADatasmithAreaLightActor::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithAreaLightActor");
    return (ADatasmithAreaLightActor*)res;
}
