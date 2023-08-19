#include "EDatasmithAreaLightActorShape.hpp"
#include "EDatasmithAreaLightActorType.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UDatasmithAreaLightActorTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
UDatasmithAreaLightActorTemplate* UDatasmithAreaLightActorTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate");
    return (UDatasmithAreaLightActorTemplate*)res;
}
