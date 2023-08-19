#include "FVector.hpp"
#include "UDatasmithDecalComponentTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UMaterialInterface.hpp"
UDatasmithDecalComponentTemplate* UDatasmithDecalComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithDecalComponentTemplate");
    return (UDatasmithDecalComponentTemplate*)res;
}
