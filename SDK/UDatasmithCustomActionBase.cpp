#include "UDatasmithCustomActionBase.hpp"
#include "UObject.hpp"
UDatasmithCustomActionBase* UDatasmithCustomActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithCustomActionBase");
    return (UDatasmithCustomActionBase*)res;
}
