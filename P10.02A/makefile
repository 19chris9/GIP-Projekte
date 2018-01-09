CXX = cl
CXXFLAGS = /EHsc /nologo
MAIN_EXECUTABLE = main.exe

all: $(MAIN_EXECUTABLE)

clean:
	del *.obj
.PHONY: clean

distclean: clean
	del $(MAIN_EXECUTABLE)
.PHONY: distclean

$(MAIN_EXECUTABLE): Source.obj sort.obj
	link /nologo $^ /OUT:$@

%.obj: %.cpp
	$(CXX) $(CXXFLAGS) /c $<