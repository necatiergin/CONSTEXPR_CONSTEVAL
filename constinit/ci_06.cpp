struct Nec {
    Nec() = default;
    ~Nec() {}

    int mx{};
};

constinit Nec a{};

// Nec is not a literal type but a is constant initialized
