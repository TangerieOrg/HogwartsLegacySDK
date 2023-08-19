#include "FDatasmithStaticParameterSetTemplate.hpp"
#include "UDatasmithMaterialInstanceTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
UDatasmithMaterialInstanceTemplate* UDatasmithMaterialInstanceTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate");
    return (UDatasmithMaterialInstanceTemplate*)res;
}
