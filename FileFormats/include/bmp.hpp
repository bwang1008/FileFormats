#ifndef BMP_HPP
#define BMP_HPP

#include <string>
#include <vector>

using byte = unsigned char;

class BMP {
public:
	explicit BMP(const std::string& bmpFilePath);
	explicit BMP(const std::vector<std::vector<std::vector<int> > >& rgb);
	auto saveAs(const std::string& savePath) const -> void;
	auto getRGB() const -> std::vector<std::vector<std::vector<byte> > >;

private:
	std::vector<std::vector<std::vector<byte> > >& rgb;
};

#endif
