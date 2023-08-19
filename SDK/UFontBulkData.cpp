#include "UFontBulkData.hpp"
#include "UObject.hpp"
UFontBulkData* UFontBulkData::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.FontBulkData");
    return (UFontBulkData*)res;
}
