#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

using VecResults = std::vector<unsigned>;

void fill(VecResults &leaders, VecResults &player)
{
	unsigned n;

	cin >> n;
	leaders.reserve(n);
	leaders.assign(istream_iterator<unsigned>(cin), istream_iterator<unsigned>());

	cin >> n;
	player.reserve(n);
	player.assign(istream_iterator<unsigned>(cin), istream_iterator<unsigned>());
}

int main(int argc, char *argv)
{
	cout << argv[0] << endl;

	VecResults leaders;
	VecResults players;

	fill(leaders, players);
}
