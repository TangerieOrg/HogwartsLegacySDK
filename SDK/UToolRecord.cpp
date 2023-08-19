#include "FInputContextWithType.hpp"
#include "UDataAsset.hpp"
#include "UToolRecord.hpp"
UToolRecord* UToolRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolRecord");
    return (UToolRecord*)res;
}
