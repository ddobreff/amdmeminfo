AMDAPPSDK_PATH=/opt/amdgpu-pro
AMDAPPSDK_ARCH=x86_64-linux-gnu

PROGRAM_NAME := amdmeminfo

SRC := $(wildcard *.c)
OBJS := ${SRC:.c=.o}

LIBRARY_DIRS := $(AMDAPPSDK_PATH)/lib/$(AMDAPPSDK_ARCH)
LIBRARIES := pci OpenCL

#compiler settings
CC := gcc
CFLAGS := -O3

CFLAGS += $(foreach incdir,$(INCLUDE_DIRS),-I$(incdir))
LDFLAGS += $(foreach librarydir,$(LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(LIBRARIES),-l$(library))

.PHONY: all clean distclean

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM_NAME) $(LDFLAGS)
	
clean:
	@- $(RM) $(PROGRAM_NAME)
	@- $(RM) $(OBJS)	

distclean: clean
