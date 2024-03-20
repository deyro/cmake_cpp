list(APPEND app_sources 
			module2.cpp
# 			add more source files here
	)

target_sources(app PUBLIC ${app_sources})

# if there is a need to add module specific include directories, uncomment the following line 
# target_include_directories(app PUBLIC .)

