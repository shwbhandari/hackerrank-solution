# hacker-rank-waiter solution
waiter problem
pair<int, int> solution = { -1, -1 };

    for (int j = word.size() - 1; j >= 0; --j)
        for (int i = j; i >= 0; --i)
            if (word[i] < word[j] && i > solution.first) solution = { i, j };

    if (solution.first == solution.second)
        cout << "no answer" << endl;
    else {
        swap(word[solution.first], word[solution.second]);
        sort(word.begin() + solution.first + 1, word.end(), less<int>());
        cout << word << endl;
    }
}


