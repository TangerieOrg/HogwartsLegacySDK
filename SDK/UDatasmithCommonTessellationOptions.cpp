#include "FDatasmithTessellationOptions.hpp"
#include "UDatasmithCommonTessellationOptions.hpp"
#include "UDatasmithOptionsBase.hpp"
UDatasmithCommonTessellationOptions* UDatasmithCommonTessellationOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithCommonTessellationOptions");
    return (UDatasmithCommonTessellationOptions*)res;
}
