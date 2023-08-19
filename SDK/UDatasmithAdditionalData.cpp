#include "UDatasmithAdditionalData.hpp"
#include "UObject.hpp"
UDatasmithAdditionalData* UDatasmithAdditionalData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithAdditionalData");
    return (UDatasmithAdditionalData*)res;
}
