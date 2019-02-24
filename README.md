# amdmeminfo


Get GDDR5 memory information from AMD Radeon GPUs.  Includes memory timings.

---

### Installation

* Download and unzip or git clone: `git clone https://github.com/ddobreff/amdmeminfo`
* `cd amdmeminfo`
* Install Linux PCI utilities: `sudo apt-get install libpci-dev`
* `make`
* Optional: `sudo cp amdmeminfo /usr/local/bin`

---

### Usage

`./amdmeminfo [options]`

Options:
* `-c` `--memconfig` Output memory configuration and running timing
* `-n` `----no-opencl` Disable OpenCL information lookup
* `-h` `--help` Display Help
* `-o` `--opencl` Order by OpenCL ID (cgminer/sgminer GPU order)
* `-q` `--quiet` Only output results
* `-s` `--short` Short form output - 1 GPU/line - `<OpenCLID>:<PCI Bus.Dev.Func>:<GPU Type>:<Memory Type>`
* `--use-stderr` Output errors to stderr

