#include "UClass.hpp"
#include "UItemToolRecord.hpp"
#include "UToolRecord.hpp"
UItemToolRecord* UItemToolRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ItemToolRecord");
    return (UItemToolRecord*)res;
}
