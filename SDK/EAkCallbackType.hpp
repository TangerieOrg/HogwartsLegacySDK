#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkCallbackType : uint8_t {
    EndOfEvent = 0,
    Marker = 2,
    Duration = 3,
    Starvation = 5,
    MusicPlayStarted = 7,
    MusicSyncBeat = 8,
    MusicSyncBar = 9,
    MusicSyncEntry = 10,
    MusicSyncExit = 11,
    MusicSyncGrid = 12,
    MusicSyncUserCue = 13,
    MusicSyncPoint = 14,
    MIDIEvent = 16,
    EAkCallbackType_MAX = 17,
};
#pragma pack(pop)
