
add_subdirectory(module1)
add_subdirectory(module2)

list(APPEND app_sources 
			main.cpp
	)

target_sources(app PUBLIC ${app_sources})

target_include_directories(app PUBLIC . include)
