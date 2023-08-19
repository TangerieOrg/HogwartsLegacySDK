#include "ECollisionChannel.hpp"
#include "FDirectoryPath.hpp"
#include "FFilePath.hpp"
#include "UAkSettings.hpp"
#include "UObject.hpp"
UAkSettings* UAkSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSettings");
    return (UAkSettings*)res;
}
