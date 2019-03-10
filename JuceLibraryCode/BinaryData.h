/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   audio_settings_svg;
    const int            audio_settings_svgSize = 2554;

    extern const char*   camera_svg;
    const int            camera_svgSize = 759;

    extern const char*   configure_svg;
    const int            configure_svgSize = 1950;

    extern const char*   configure_small_svg;
    const int            configure_small_svgSize = 2189;

    extern const char*   expand_svg;
    const int            expand_svgSize = 1044;

    extern const char*   mute_svg;
    const int            mute_svgSize = 1242;

    extern const char*   pause_svg;
    const int            pause_svgSize = 169;

    extern const char*   play_svg;
    const int            play_svgSize = 151;

    extern const char*   phase_invert_svg;
    const int            phase_invert_svgSize = 1256;

    extern const char*   zoom_in_svg;
    const int            zoom_in_svgSize = 972;

    extern const char*   zoom_out_svg;
    const int            zoom_out_svgSize = 933;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 11;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
