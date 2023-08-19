#include "FDirectoryPath.hpp"
#include "FFilePath.hpp"
#include "UAkSettingsPerUser.hpp"
#include "UObject.hpp"
UAkSettingsPerUser* UAkSettingsPerUser::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSettingsPerUser");
    return (UAkSettingsPerUser*)res;
}
