# ! /bin/bash/

rm -rf build
mkdir build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=../soletta_module/edison-toolchain.cmake -DCMAKE_INSTALL_PREFIX=/usr 
make
sudo make install DESTDIR = ../../TEMP/sml/
cd ../../TEMP/sml/
tar cvf sml.tar *
cd ..
scp -P 2000 sml.tar root@115.145.178.197:~/
