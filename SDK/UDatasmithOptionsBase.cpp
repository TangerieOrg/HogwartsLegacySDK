#include "UDatasmithOptionsBase.hpp"
#include "UObject.hpp"
UDatasmithOptionsBase* UDatasmithOptionsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithOptionsBase");
    return (UDatasmithOptionsBase*)res;
}
