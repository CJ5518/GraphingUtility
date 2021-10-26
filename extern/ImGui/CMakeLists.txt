#ImGui

set(IMGUI_SOURCE_FILES
	imgui_draw.cpp
	imgui_tables.cpp
	imgui_widgets.cpp
	imgui-SFML.cpp
	imgui.cpp
)

set(IMGUI_INCLUDE_FILES
	"include/imconfig-SFML.h"
	"include/imconfig.h"
	"include/imgui_internal.h"
	"include/imgui-SFML.h"
	"include/imgui.h"
	"include/imstb_rectpack.h"
	"include/imstb_textedit.h"
	"include/imstb_truetype.h"
)

add_library(imgui STATIC ${IMGUI_SOURCE_FILES} ${IMGUI_HEADER_FILES})
target_include_directories(imgui PUBLIC include)
target_include_directories(imgui PUBLIC ../SFML-2.5.1/include)
target_link_libraries(imgui sfml-window sfml-graphics sfml-system)