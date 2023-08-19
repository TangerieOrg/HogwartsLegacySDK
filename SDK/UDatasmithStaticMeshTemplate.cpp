#include "FDatasmithMeshBuildSettingsTemplate.hpp"
#include "FDatasmithMeshSectionInfoMapTemplate.hpp"
#include "FDatasmithStaticMaterialTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithStaticMeshTemplate.hpp"
UDatasmithStaticMeshTemplate* UDatasmithStaticMeshTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshTemplate");
    return (UDatasmithStaticMeshTemplate*)res;
}
